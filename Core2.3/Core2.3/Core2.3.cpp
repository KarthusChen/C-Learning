#include<iostream>
using namespace std;

void swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << a << endl;
	cout << b << endl;
}

void swap02(int*a,int*b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void swap03(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << a << endl;
	cout << b << endl;

}

int main() {

	int a = 10;

	int b = 20;

	//swap01(a, b);

	swap03(a, b);

	return 0;
}