#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void test01()
{
	ifstream ifs;

	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "File open failed" << endl;
		return;
	}

	/*1.
	char buf[1024] = { 0 };
	while (ifs >> buf)
	{
		cout << buf << endl;
	}

	ifs.close();*/

	/*2.
	char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf)))
	{
		cout << buf << endl;
	}*/

	/*3.
	string buf;
	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}*/

	//4.
	char c;
	while ((c = ifs.get()) != EOF) //end of file
	{
		cout << c;
	}


	ifs.close();
}


int main()
{
	test01();
	return 0;
}