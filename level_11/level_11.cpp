// level_11.cpp: 定义应用程序的入口点。
//

#include "level_11.h"
#include "men.h"

using namespace std;

Human::Human()
{
	cout<<"执行了Human::Human()构造函数"<<endl;
}
Human::Human(int age)
{
	cout<<"执行了Human::Human(int)构造函数"<<endl;
}



int main()
{
	cout << "Hello CMake." << endl;
	Men men;
	return 0;
}
