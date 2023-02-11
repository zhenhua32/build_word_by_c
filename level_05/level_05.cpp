// level_05.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#define PI 3.14
// 带参数的宏替换
#define MAX(a,b) a>b?a:b
// 引用头文件
#include "const.h"

int main()
{
	std::cout << "Hello World!\n";
	printf("pi * 3 = %f\n", PI * 3);
	printf("max(1, 3) = %d\n", MAX(1, 3));
	printf("pi = %f\n", PI);

	// 条件编译
#ifdef PI
	printf("PI 已经被定义, 值为 %f\n", PI);
#else
	printf("没有找到 PI 的定义\n");
#endif

		// 条件编译
#ifndef PI
	printf("没有找到 PI 的定义\n");
#else
	printf("PI 已经被定义, 值为 %f\n", PI);
#endif
	
	// 条件编译
#if 1
	printf("条件为真\n");
#endif
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
