#include<iostream>
using namespace std;

int main()
{
	int arr[3][3]{ 100,100,100,90,50,100,60,70,80 };

	cout << "张三总成绩为：" << arr[0][0] + arr[0][1] + arr[0][2] << endl;
	cout << "李四总成绩为：" << arr[1][0] + arr[1][1] + arr[1][2] << endl;
	cout << "王五总成绩为：" << arr[2][0] + arr[2][1] + arr[2][2] << endl;



	return 0;

}