// level_00.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
    printf("你好世界\n");

    // 注释
    // 这里是单行注释
    /*
        这个是多行注释
    */

    // 整型
    int int_num = 4;
    short short_num = 6;
    long long_num = 12345;
    unsigned int unsigned_int = 66;
    printf("int_num: %d byte\n", sizeof(int_num));
    printf("short_num: %d byte\n", sizeof(short_num));
    printf("long_num: %d byte\n", sizeof(long_num));
    printf("unsigned_int: %d byte\n", sizeof(unsigned_int));

    // 浮点型
    float float_num = 0.123;
    float float_num_e = 1e2;
    double double_num = 0.12;
    printf("float_num_e: %f\n", float_num_e);
    printf("double_num: %d byte\n", sizeof(double_num));

    // 字符型
    char char_word = 'a';
    char char_string[] = "a";
    printf("char_word: %d\n", sizeof(char_word));
    printf("char_string: %d\n", sizeof(char_string));

    // 类型转换
    float float_num0 = 12.1;
    float float_num1 = 3.14;
    auto result = float_num0 + float_num1;
    printf("result = %f, sizeof = %d byte\n", result, sizeof(result));
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
