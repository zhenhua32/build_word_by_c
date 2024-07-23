// level_13.cpp: 定义应用程序的入口点。
//

#include "level_13.h"

using namespace std;

template<typename T>
T add(T i, T j) {
	return i + j;
}

template<int a, int b>
int addv2() {
	return a + b;
}

template<typename T, int a>
T addv3(T i) {
	return i + a;
}

int main()
{
	cout << "Hello CMake." << endl;

	int a = 10;
	int b = 12;
	int c = add(a, b);
	cout << "a + b = " << c << endl;

	float d = add(1.0, 2.3);
	cout << "1.0 + 2.3 = " << d << endl;

	int e = addv2<1, 2>();
	cout << "1 + 2 = " << e << endl;

	float f = addv3<float, 3>(1.0);
	cout << "1.0 + 3 = " << f << endl;

	return 0;
}
