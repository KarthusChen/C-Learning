#include <iostream>
using namespace std;

//��Ҫ���ؾֲ�����������
int& test01()
{
	int a = 10;//�ֲ����������ջ��
	return a;
}
//�����ĵ��ÿ�����Ϊ��ֵ

int& test02()
{
	static int a = 10;//��̬���� �����ȫ���� ��ϵͳ�ͷţ��ڳ��������
	return a;
}

int main()
{
	/*int& ref = test01();

	cout << "ref=" << ref << endl;*///a���ڴ��Ѿ����ͷ�

	int& ref2 = test02();
	cout << "ref=" << ref2 << endl;
	cout << "ref=" << ref2 << endl;

	test02() = 1000;

	cout << "ref=" << ref2 << endl;
	cout << "ref=" << ref2 << endl;

	return 0;
}