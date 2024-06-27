#include <iostream>
#include <fstream>
using namespace std;

class Person
{
public:

	char m_Name[64];
	int m_Age;
};

void test01()
{
	ofstream ofs;
	ofs.open("person.txt", ios::out | ios::binary);
	Person p = { "Linco",35 };
	ofs.write((const char*)&p, sizeof(p));
	ofs.close();
}


int main()
{
	test01();
	return 0;
}