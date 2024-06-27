#include <iostream>
using namespace std;
int main() {

	//continue语句

	for (int i = 0; i <= 100; i++) {

		//奇数输出，偶数不输出
		if (i % 2 == 0) 
		{
			continue;//可以筛选条件，循环执行到此为止，执行下一次的循环
			//break会退出循环，continue不会
		}

		cout << i << endl;
	}




	return 0;
}