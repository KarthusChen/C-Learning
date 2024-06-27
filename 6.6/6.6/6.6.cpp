#include<iostream>
using namespace std;

//函数的声明
//比较函数，实现两个整型数字进行比较，返回较大的值


int max(int a, int b);//函数的声明
//定义只能有一次，声明可以有多次

int main()
{
	int a = 10;
	int b = 20;

	cout << max(a, b) << endl;


	system("pause");
	return 0;
}

int max(int a, int b)
{
	return a > b ? a : b;

}