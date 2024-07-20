// level_12.cpp: 定义应用程序的入口点。
//

#include "level_12.h"

using namespace std;


class B {
public:
	B() :m_bm(100) {

		cout << "B() 的构造函数" << endl;
	}
	B(const B& tmp) {
		m_bm = tmp.m_bm;
		cout << "B(const B& tmp) 的拷贝构造函数" << endl;
	}
	virtual ~B() {
		cout << "~B() 的析构函数" << endl;
	}
	int m_bm;
};

class A {
public:
	A() :m_pb(new B()) {
		cout << "A() 的构造函数" << endl;
	}
	A(const A& tmpa) :m_pb(new B(*(tmpa.m_pb))) {
		cout << "A(const A& tmpa) 的拷贝构造函数" << endl;
	}
	A(A&& tmpa) noexcept :m_pb(tmpa.m_pb){
		tmpa.m_pb = nullptr;
		cout << "A(A&& tmpa) 的移动构造函数" << endl;
	}
	~A() {
		delete m_pb;
		cout << "~A() 的析构函数" << endl;
	}

	// 拷贝复制符
	A& operator=(const A& src) {
		if (this == &src)
			return *this;

		delete m_pb;
		m_pb = new B(*(src.m_pb));
		cout << "类A的拷贝复制符执行了" << endl;
		return *this;
	}

	// 移动复制符
	A& operator=(A&& src) noexcept {
		if (this == &src) {
			return *this;
		}

		delete m_pb;
		m_pb = src.m_pb;
		src.m_pb = nullptr;
		cout << "类A的移动复制符执行了" << endl;
		return *this;
	}

private:
	B* m_pb;
};

static A getA() {
	A a;
	return a;
}


int main()
{
	cout << "Hello CMake." << endl;

	B* b = new B();
	b->m_bm = 12;
	B* b2 = new B(*b);
	delete b;
	delete b2;

	cout << "start" << endl;
	A a = getA();
	cout << "start" << endl;
	A a1(a);
	cout << "start" << endl;
	A a2(std::move(a));

	cout << "return" << endl;
	return 0;
}
