#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	int b = 0;

	const int* p1 = &a; //����ָ�룬ָ���ָ������޸ģ�����ָ��ָ���ֵ�����Ը�
	*p1 = 10;//ֵ�����Ը�
	p1 = &b;

	
	int* const p2 = &a;//ָ�볣����ָ���ָ�򲻿��Ըģ�ָ��ָ���ֵ���Ը�
	*p2 = 10;
	p2 = &b;


	const int* const p3 = &a;//ָ���ָ���ָ��ָ���ֵ�������Ը�

	*p3 = 10;
	p3 = &2;

	return 0; 
}