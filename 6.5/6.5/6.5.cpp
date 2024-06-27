//1.无参无返
//2.有参无返
//3.无参有返
//4.有参有返

#include<iostream>
using namespace std;

//1
void test01()
{
	cout << "this is test 01" << endl;
}

//2
void test02(int a)
{
	cout << "this is test 02 and the number is " << a << endl;
}

//3
int test03()
{
	cout << "this is test03" << endl;
	return 1000;
}

//4
int test04(int b)
{
	cout << "this is test04 b=" << b << endl;
	return 1;
}

int main()
{
	test01();

	test02(100);

	int num1 = test03();
	cout << "num=" << endl;

	int num2 = test04(10000);
	cout << "num2=" << num2 << endl;

	return 0;
}
