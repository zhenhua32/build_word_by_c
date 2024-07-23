// level_13.h: 标准系统包含文件的包含文件
// 或项目特定的包含文件。

#pragma once

#include <iostream>

// TODO: 在此处引用程序需要的其他标头。

#ifndef __MY__
#define __MY__

template<typename T>
class myvector {
public:
	typedef T* myiterator;  // 定义类型别名

	myvector();
	myvector& operator=(const myvector&);

	myiterator mybegin();
	myiterator myend();

	// 成员函数声明加实现
	void myfunc() {};
	// 成员函数仅声明
	void myfunc2();
};

// 定义在外面的成员函数的实现
template<typename T>
void myvector<T>::myfunc2() {
	std::cout << "myfunc2" << std::endl;
}

template<typename T>
myvector<T>::myvector() {
	std::cout << "myvector的构造函数" << std::endl;
}

template<typename T>
myvector<T>& myvector<T>::operator=(const myvector& v) {
	std::cout << "myvector的赋值运算符" << std::endl;
	return *this;
}

#endif // !__MY__

