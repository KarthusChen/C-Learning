#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	int b = 0;

	const int* p1 = &a; //常量指针，指针的指向可以修改，但是指针指向的值不可以改
	*p1 = 10;//值不可以改
	p1 = &b;

	
	int* const p2 = &a;//指针常量，指针的指向不可以改，指针指向的值可以改
	*p2 = 10;
	p2 = &b;


	const int* const p3 = &a;//指针的指向和指针指向的值都不可以改

	*p3 = 10;
	p3 = &2;

	return 0; 
}