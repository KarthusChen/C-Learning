#include <iostream>
using namespace std;

int main()
{
	//��ά����������;

	//1.���Բ鿴ռ���ڴ�ռ��С
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	cout << "��ά����ռ���ڴ�ռ�Ϊ��" << sizeof(arr) << endl;
	cout << "��ά���ݵ�һ��ռ���ڴ�ռ�Ϊ��" << sizeof(arr[0]) << endl;
	cout << "��ά�����һ��Ԫ��ռ���ڴ�ռ�Ϊ" << sizeof(arr[0][0]) << endl;

	cout << "�����ά������" << sizeof(arr) / sizeof(arr[0]) << "��" << endl;
	cout << "�����ά������" << sizeof(arr[0]) / sizeof(arr[0][0]) << "��" << endl;

	//2.���Բ鿴��ά������׵�ַ

	cout << "��ά�����׵�ַΪ��" << (int)arr << endl;
	cout << "��ά�����һ���׵�ַΪ" << (int)arr[0] << endl;
	cout << "��ά����ڶ����׵�ַΪ" << (int)arr[1] << endl;

	cout << "��ά�����һ��Ԫ���׵�ַΪ" << (int)&arr[0][0] << endl;
	cout << "��ά����ڶ���Ԫ���׵�ַΪ" << (int)&arr[0][1] << endl;

	return 0;
}