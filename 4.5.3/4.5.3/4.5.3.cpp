#include <iostream>
using namespace std;

//重载递增运算符

//自定义整形
class MyInteger
{
public:
	friend ostream& operator<<(ostream& cout, MyInteger myint);
	MyInteger()
	{
		int m_Num =0;
	}
	//重载前置++运算符
	MyInteger &  operator++()
	{
		m_Num++;
		return *this;
	}

	//重载后置++运算符
	MyInteger operator++(int)//int代表占位参数，可以用于区分前置和后置递增
	{
		//先 记录当时结果
		MyInteger temp = *this;

		//后 递增操作
		m_Num++;

		//最后 将记录结果做返回

		return temp;
	}

private:
	int m_Num = 0;
};

//重载左移运算符

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