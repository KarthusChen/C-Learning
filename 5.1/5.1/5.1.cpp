#include<iostream>
using namespace std;
int main() {

	/*
	1.�������� �����������鳤�ȡ�;
	2.�������� �����������鳤�ȡ�={ֵ1��ֵ2...};
	3.�������� ����������={ֵ1��ֵ2...};
	
	*/
	//�������е�Ԫ�ؽ��и�ֵ
	//����Ԫ�ص��±��Ǵ�0��ʼ������
	int arr[5];
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;

	//��������Ԫ��
	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;
	cout << arr[3] << endl;
	cout << arr[4] << endl;

	//2.�������� �����������鳤�ȡ�={ֵ1��ֵ2};
	//����ڳ�ʼ������ʱ��û��ȫ����д�꣬����0���ʣ������

	int arr2[5] = { 10,20,30,40,50 };


	for (int a = 0; a < 5; a++) 
	{
		cout << arr2[a] << endl;
	}
	
	/*  OR
	cout << arr2[0] << endl;
	cout << arr2[1] << endl;
	cout << arr2[2] << endl;
	cout << arr2[3] << endl;
	cout << arr2[4] << endl;*/

	//3.�������� ������[]={ֵ1��ֵ2...};
	//���������ʱ�򣬱����г�ʼ����
	int arr3[] = { 90,80,70,60,50,40,30,20,10,0 };

	for (int b = 0; b < 10; b++)
	{
		cout << arr3[b] << endl;
	}
		
	return 0;

}