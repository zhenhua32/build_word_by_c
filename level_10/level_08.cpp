// level_08.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";

    unsigned int a = 38 & 22;
    printf("a=38&22 = %u \n", a);
    unsigned int b = 38 | 22;
    printf("b=38|22 = %u \n", b);
    unsigned int c = 38 ^ 22;
    printf("c=38^22 = %u \n", c);
    unsigned int d = ~38;
    printf("d=~38 = %u \n", d);
    unsigned int e = 16 << 1;
    printf("e=16<<1 = %u \n", e);
    unsigned int f = 17 >> 1;
    printf("f=17>>1 = %u \n", f);
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
