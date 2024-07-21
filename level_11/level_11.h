// level_11.h: 标准系统包含文件的包含文件
// 或项目特定的包含文件。

#pragma once

#include <iostream>

// TODO: 在此处引用程序需要的其他标头。

#ifndef __HUMAN__
#define __HUMAN__
class Human {
public:
	Human();
	Human(int);
public:
	int m_Age;
	char m_Name[100];
};
#endif
