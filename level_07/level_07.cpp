// level_07.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

// 定义结构体
struct student {
    int id;
    int age;
    char name[100];
};

// 定义共用体
union car {
    int carnum;
    char cartype;
    char carname[100];
};

int main()
{
    std::cout << "Hello World!\n";

    // 使用结构体
    struct student s1, s2;
    // 同时初始化
    struct student s3 = {1, 18, "hello" };
    printf("student s3 的 id 是 %d, 年龄是 %d, 名字是 %s\n", s3.id, s3.age, s3.name);
    s1.id = 2;
    s1.age = 16;
    // 字符串功能实在是太弱了
    strcpy_s(s1.name, "hello");

    // 结构体数组
    struct student stuList[10];
    struct student stuList1[2] = {
        {1, 16, "hello"},
        {1, 16, "world"},
    };

    // 结构体指针
    struct student* s4;
    s4 = &s3;
    printf("s4 是个结构体指针, id是 %d, age是 %d, name是 %s\n", s4->id, s4->age, (*s4).name);

    // 使用共用体
    union car car1;
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
