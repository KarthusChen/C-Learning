#include <iostream>
using namespace std;
int main() {

	//数组名用途
	//1.可以通过数组名统计整个数组占用内存大小
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "整个数组占用内存为：" << sizeof(arr) << endl;
	cout << "每个元素所占用的内存空间为：" << sizeof(arr[1]) << endl;
	cout << "数组中元素个数为:" << sizeof(arr) / sizeof(arr[1]) << endl;


	//2.可以通过数组名查看数组首地址
	cout << "数组的首地址为" << (int)arr << endl;
	cout << "数组第一个元素地址为" << (int)&arr[0] << endl;
	cout << "second element" << (int)&arr[1] << endl;

	//数组名是常量，不可以进行赋值


	return 0;
}