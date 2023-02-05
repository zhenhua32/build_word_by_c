// level_04.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
void help_func();

// 定义函数声明
// 无参数, 无返回值
void func1();
// 有参数, 有返回值
int func2(int a, int b);

// 定义函数
// 无参数, 无返回值
void func1()
{
	std::cout << "func1" << std::endl;
}
// 有参数, 有返回值
int func2(int a, int b)
{
	return a + b;
}

// 递归函数
// 这是个累乘函数, 输入一个整数, 每次不断和自身减一相乘, 直到输入为1.
// 5! = 5 * 4 * 3 * 2 * 1
int func3(int a)
{
	if (a == 1)
	{
		return 1;
	}
	else
	{
		return a * func3(a - 1);
	}
}


// 地址传递函数
// 传递的是地址, 通过地址修改值
void func4(int a[])
{
	a[0] = 10;
}


// static 变量
// static 变量只会初始化一次, 之后不会再初始化, 反而是可以保留该值
void func5()
{
	int a = 0;
	static int b = 0;
	a++;
	b++;
	printf("a=%d\n", a);
	printf("b=%d\n", b);
}



int main()
{
    std::cout << "Hello World!\n";

	// 调用函数
	func1();
	int a = func2(1, 2);
	std::cout << a << std::endl;

	// 调用递归函数
	int b = func3(5);
	std::cout << b << std::endl;

	// 调用地址传递函数
	int c[3] = { 1, 2, 3 };
	std::cout << c[0] << std::endl;
	func4(c);
	std::cout << c[0] << std::endl;

	// 多次调用包含 static 变量的函数
	func5();
	func5();

	// 调用另一个文件中的函数
	help_func();
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
