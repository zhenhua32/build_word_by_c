// level_08.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include "file2.h"
using namespace std;

namespace dd {
	void hello()
	{
		std::cout << "我来自中国" << std::endl;
		printf("hello world from dd\n");
	}
}

struct Student {
private:
	int id;
public:
	char name[10];
	void func() {
		std::cout << name << std::endl;
	}
};


int main()
{
	std::cout << "Hello World!\n";

	// 使用 {} 初始化
	int a = 5;
	int b{ 4 };

	std::cout << "a=" << a << "b=" << b << std::endl;

	// 范围遍历
	int v[]{ 1, 2, 3, 4 };
	for (auto& x : v) {
		std::cout << x << std::endl;
	}

	// 结构体函数
	Student s;
	strcpy_s(s.name, "dilireba");
	s.func();

	// 字符串
	string s1;
	string s2 = "hello";
	string s3 = s2;
	std::cout << s1.empty() << std::endl;
	std::cout << s2.size() << std::endl;
	std::cout << s2.length() << std::endl;
	std::cout << s2[2] << std::endl;
	std::cout << s2 + s3 << std::endl;
	std::cout << (s2 == s3) << std::endl;
	std::cout << (s2 != s3) << std::endl;
	for (auto c: s2) {
		std::cout << c << std::endl;
	}
	// 遍历的时候改变值
	for (auto& c : s2) {
		c = std::toupper(c);
	}
	std::cout << s2 << std::endl;

	// 调用命名空间里的成员
	dd::hello();
	dd2::hi();

	// vector 类型
	vector<int> v1{ 1, 2, 3, 4 };
	v1.push_back(5);
	vector<int> v2 = v1;
	vector<int> v3(v1);
	vector<int> v4(10, -2); // 创建10个-2的vector
	std::cout << v3.empty() << std::endl;
	std::cout << v1.size() << std::endl;
	v1.clear();
	std::cout << v2[0] << std::endl;
	for (auto x : v2) {
		std::cout << x << std::endl;
	}

	// 迭代器
	std::cout << "迭代器" << std::endl;
	vector<int> v5{ 1, 2, 3, 4 };
	vector<int>::iterator iter;
	iter = v5.begin();
	std::cout << *iter << std::endl;
	iter = v5.end();
	std::cout << *(iter - 1) << std::endl;
	for(iter = v5.begin(); iter != v5.end(); iter++) {
		std::cout << *iter << std::endl;
	}

}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
