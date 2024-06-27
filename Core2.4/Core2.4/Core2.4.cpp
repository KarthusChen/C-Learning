#include <iostream>
using namespace std;

//不要返回局部变量的引用
int& test01()
{
	int a = 10;//局部变量存放在栈区
	return a;
}
//函数的调用可以作为左值

int& test02()
{
	static int a = 10;//静态变量 存放在全局区 由系统释放（在程序结束后）
	return a;
}

int main()
{
	/*int& ref = test01();

	cout << "ref=" << ref << endl;*///a的内存已经被释放

	int& ref2 = test02();
	cout << "ref=" << ref2 << endl;
	cout << "ref=" << ref2 << endl;

	test02() = 1000;

	cout << "ref=" << ref2 << endl;
	cout << "ref=" << ref2 << endl;

	return 0;
}