// level_15.cpp: 定义应用程序的入口点。
//

#include "level_15.h"
#include <thread>
#include <list>
#include <mutex>

using namespace std;


void myprint() {
	cout << "hello print" << endl;
	return;
}

void myprint2(const int& i, char* mybuf) {
	cout << i << endl;
	cout << mybuf << endl;
	return;
}

class MyClsPrint {
public:
	void operator() () {
		cout << "可调用的类" << endl;
	}

};


class A {
private:
	list<int> msgRecvQueue;
	mutex my_mutex;
public:
	void in() {
		for (int i = 0l; i < 100000; i++) {
			cout << "insert" << i << endl;
			my_mutex.lock();
			msgRecvQueue.push_back(i);
			my_mutex.unlock();
		}
	}

	void out() {
		for (int i = 0; i < 100000; i++) {
			my_mutex.lock();
			if (!msgRecvQueue.empty()) {
				int command = msgRecvQueue.front();
				msgRecvQueue.pop_front();
				my_mutex.unlock();
				cout << "out" << command << endl;
			}
			else {
				my_mutex.unlock();
				cout << "队列里没数据, 跳过执行" << endl;
			}
		}
	}

};



int main()
{
	cout << "Hello CMake." << endl;

	// 创建线程
	thread mythread(myprint);
	mythread.join();
	//mythread.detach();

	//auto mycls_thread = MyClsPrint();
	MyClsPrint mycls_thread;
	thread mythread2(mycls_thread);
	mythread2.join();

	// 用lamabda 表达式创建线程
	auto my_lambda_thread = [] {
		cout << "in lambda 表达式" << endl;
		};
	thread mythread3(my_lambda_thread);
	mythread3.join();

	// 读写线程数据
	A a;
	thread in_thread(&A::in, &a);
	thread out_thread(&A::out, &a);
	in_thread.join();
	out_thread.join();

	return 0;
}
