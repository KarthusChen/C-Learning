#include <iostream>
#include <fstream>
using namespace std;

void test01()
{
	//1.����ͷ�ļ� fstream

	//2.����������
	ofstream ofs;


	//3.ָ���򿪵ķ�ʽ
	ofs.open("test.txt", ios::out);

	//4.��д
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

