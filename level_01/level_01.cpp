// level_01.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";

	// 输入和输出
	int a, b;
	printf("输入一个数字,然后逗号空格,再输入一个空格\n");
	scanf_s("%d, %d", &a, &b);
	printf("%d, %d\n", a, b);

	// if 语句
	int c = 8;
	if (c > 5) {
		printf("c=8, 8>5 => c>5\n");
	}
	
	if (c > 5 and c < 10) {
		printf("c=8, 8>5 and 8<10 => c>5 and c<10\n");
	}
	else {
		printf("c=8, 不可能到这里\n");
	}

	if (c > 10) {
		printf("c > 10\n");
	}
	else if (c > 5) {
		printf("c > 5\n");
	}
	else {
		printf("c <= 5\n");
	}
	
	// 三目运算符 ?:
	int d = 10;
	int e = (d > 5) ? 1 : 0;
	printf("d=10, d>5 ? 1 : 0 => e=%d\n", e);

	// switch 语句
	int f = 10;
	switch (f)
	{
	case 1:
		printf("f == 1\n");
		break;
	case 5:
		printf("f == 5\n");
		break;
	case 10:
		printf("f == 10\n");
		break;
	default:
		printf("f != 1, 5, 10\n");
		break;
	}

	// 打印出斐波那契数列
	int i, n, t1 = 0, t2 = 1, nextTerm;
	printf("输入一个数字\n");
	scanf_s("%d", &n);
	printf("斐波那契数列: ");
	for (i = 1; i <= n; ++i)
	{
		printf("%d, ", t1);
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
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
