#include <iostream>
using namespace std;
int main()
{

	//1.�ȴ�ӡ������λ����
	int num = 100;

	do
	{
		cout << num << endl;
		num++;

		int a = 0;
		int b = 0;
		int c = 0;

		a = num % 10; //��ȡ���ֵĸ�λ
		b = num / 10 % 10;//��ȡ���ֵ�ʮλ
		c = num / 100;//��ȡ���ֵİ�λ

		if (a ^ 3 + b ^ 3 + c ^ 3 = num);
	} while (num < 1000);
	//2.��������λ�������ҵ�ˮ�ɻ���

	cout << "��λ����ˮ�ɻ�����" << num << endl;

	system("pause");

	return 0;
}