#include <iostream>
using namespace std;
int main()
{

	//1.先打印所有三位数字
	int num = 100;

	do
	{
		cout << num << endl;
		num++;

		int a = 0;
		int b = 0;
		int c = 0;

		a = num % 10; //获取数字的个位
		b = num / 10 % 10;//获取数字的十位
		c = num / 100;//获取数字的百位

		if (a ^ 3 + b ^ 3 + c ^ 3 = num);
	} while (num < 1000);
	//2.从所有三位数字中找到水仙花数

	cout << "三位数的水仙花数是" << num << endl;

	system("pause");

	return 0;
}