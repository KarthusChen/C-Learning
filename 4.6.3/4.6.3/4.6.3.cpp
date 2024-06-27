#include <iostream>
using namespace std;

//继承中的对象模型

class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son : public Base
{
public:

	int m_D;
};




int main()
{

	cout << sizeof(Son) << endl;

	return 0;
}