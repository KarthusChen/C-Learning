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
	ifstream ifs;
	ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open());
	{
		return;
	}

	Person p;
	ifs.read((char*)&p, sizeof(p));

	cout << "Name:" << p.m_Name << " Age:" << endl;
	
	ifs.close();

}

int main()
{
	test01();
	return 0;
}