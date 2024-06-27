#include <iostream>
using namespace std;
int main() {

	 //break 的使用时机

	//1.出现在swicth语句中
	cout << "请选择副本难度" << endl;
	cout << "1.normal" << endl;
	cout << "2.medium" << endl;
	cout << "3.difficult" << endl;

	int select = 0;

	cin >> select;

	switch (select)
	{
	case 1:
		cout << "You chose normal!" << endl;
		break;
	case 2:
		cout << "You chose medium!" << endl;
		break;
	case 3:
		cout << "You chose difficult!" << endl;
		break;
	default:
		break;
	}

	//2.出现在循环语句中
	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
		if (i == 5)break;//退出循环
	}

	//3.出现在嵌套循环语句中
	for (int b = 0; b < 10; b++) {
		for (int a = 0; a < 10; a++) {
			cout << "*";
			if (a == 5)break;
		}
		cout << endl; 
	}
	



	return 0;
}