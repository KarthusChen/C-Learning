#include <iostream>
using namespace std;
int main()
{
	//goto 语句 (不太推荐使用）

	cout << "1.xxxxx" << endl;
	cout << "2.xxxxx" << endl;
	
	goto FLAG;

	cout << "3.xxxxx" << endl;
	cout << "4.xxxxx" << endl;

	FLAG:

	cout << "5.xxxxx" << endl;

	return 0;
}