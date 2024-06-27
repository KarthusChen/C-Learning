#include <iostream>
using namespace std;

int a = 0;
int b = 0;

int main() {

	int c = 0;
	int d = 0;

	static int e = 0;
	static int f = 0;

	cout << (int)&a<<endl;
	cout << (int)&b<<endl;
	cout << (int)&c<<endl;
	cout << (int)&d<<endl;
	cout << (int)&e<<endl;
	cout << (int)&f<<endl;


	return 0;
}