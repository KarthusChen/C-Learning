#include <iostream>
using namespace std;

//���ص��������

//�Զ�������
class MyInteger
{
public:
	friend ostream& operator<<(ostream& cout, MyInteger myint);
	MyInteger()
	{
		int m_Num =0;
	}
	//����ǰ��++�����
	MyInteger &  operator++()
	{
		m_Num++;
		return *this;
	}

	//���غ���++�����
	MyInteger operator++(int)//int����ռλ������������������ǰ�úͺ��õ���
	{
		//�� ��¼��ʱ���
		MyInteger temp = *this;

		//�� ��������
		m_Num++;

		//��� ����¼���������

		return temp;
	}

private:
	int m_Num = 0;
};

//�������������

ostream& operator<<(ostream& cout, MyInteger myint)
{
	cout << myint.m_Num;
	return cout;
}

void test01()
{

	MyInteger myint;

	cout << ++myint << endl;
	cout << myint++ << endl;
	cout << myint << endl;
}

int main()
{
	test01();

	return 0;
}