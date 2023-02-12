// level_06.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>


int max_value(int a, int b) {
    return a > b ? a : b;
}

// 返回指针的函数
int* max(int a, int b) {
    return &(a > b ? a : b);
}


// 指针数组可以作为 main 函数的参数, 用来接受系统传进来的参数
int main(int argc, char* argv[])
{
    std::cout << "Hello World!\n";

    // 接受到的参数
    printf("接受到参数 argc=%d, argv=%p\n", argc, argv);
    // 打印指针数组
    for (int i = 0; i < argc; i++) {
        printf("argv[%d]=%s\n", i, argv[i]);
    }

    // 定义指针变量
    int a = 1, b = 2;
    int* ap;
    // 将指针变量指向某个变量
    ap = &a;
    // 获取指针变量对应的值
    printf("ap 指针变量对应的值是 %d\n", *ap);

    // 数组的指针
    int c[5] = { 1, 2, 3, 4, 5 };
    int* p;
    p = &c[1];
    printf("p 指向了数组 c[1], 值是 %d\n", *p);

    // 指针数组
    int* d[5];

    // 数组的指针
    int(*e)[10];

    // 字符数组
    char str1[] = "hello";
    char str2[] = "hello";
    printf("str1 的地址是 %p\n", str1);
    printf("str2 的地址是 %p\n", str2);  // 和 str1 指向不同的地址

    // 字符指针
    const char* str3 = "hello";
    const char* str4 = "hello";
    printf("str3 的地址是 %p\n", str3);
    printf("str4 的地址是 %p\n", str4);  // 和 str3 指向相同的地址

    // 函数的指针
    printf("max_value(1, 2) 返回 %d \n", max_value(1, 2));
    // 定义一个函数的指针, 注意, (*maxp) 的括号不能省略
    int (*maxp) (int, int);
    maxp = max_value;
    printf("(*maxp)(1, 2) 返回 %d \n", (*maxp)(1, 2));

    // 调用返回指针的函数
    printf("调用返回指针的函数 *max(1, 2) 的地址是 %p, 值是 %d\n", max(1, 2), *max(1,2));
    
    // 指针数组
    int* j[4];
    // 数组的指针
    int(*k)[4];
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
