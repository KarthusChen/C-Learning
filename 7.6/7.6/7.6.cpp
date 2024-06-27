#include<iostream>
using namespace std;
int main()
{
	int arr[10]{ 1,2,3,4,5,6,7,8,9,10 };

	cout << "the first element is " << arr[0] << endl;

	int* p = arr;//arr就是数组首地址

	cout << "利用指针访问第一个元素：" << *p << endl;

	//p++;

	//cout << "利用指针访问第二个元素：" << *p << endl;

	for (int a = 0; a < 10; a++)
	{
		/*cout << arr[a] << endl;*/
		cout << *p << endl;
		p++;
		
	}

	system ("pause");

	return 0;

}