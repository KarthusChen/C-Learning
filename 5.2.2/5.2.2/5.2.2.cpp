#include <iostream>
using namespace std;
int main() {

	//��������;
	//1.����ͨ��������ͳ����������ռ���ڴ��С
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "��������ռ���ڴ�Ϊ��" << sizeof(arr) << endl;
	cout << "ÿ��Ԫ����ռ�õ��ڴ�ռ�Ϊ��" << sizeof(arr[1]) << endl;
	cout << "������Ԫ�ظ���Ϊ:" << sizeof(arr) / sizeof(arr[1]) << endl;


	//2.����ͨ���������鿴�����׵�ַ
	cout << "������׵�ַΪ" << (int)arr << endl;
	cout << "�����һ��Ԫ�ص�ַΪ" << (int)&arr[0] << endl;
	cout << "second element" << (int)&arr[1] << endl;

	//�������ǳ����������Խ��и�ֵ


	return 0;
}