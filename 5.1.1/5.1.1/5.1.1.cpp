#include <iostream>
#include <fstream>
using namespace std;

void test01()
{
	//1.包含头文件 fstream

	//2.创建流对象
	ofstream ofs;


	//3.指定打开的方式
	ofs.open("test.txt", ios::out);

	//4.开写
	ofs << "name:Linco" << endl;
	ofs << "gender:female" << endl;
	ofs << "age:35" << endl;

	ofs.close();

}

int main()
{
	test01();
	return 0;
	
}

