#include <iostream>
using namespace std;
int main() {

	int arr[5] = { 300,350,200,400,250 };
	
	int max = 0;

	for (int a = 0; a<5; a++) {

		//cout << arr[a] << endl;
		
		if (arr[a] > max) {
			max=arr[a];
		}


	}

	cout << "最重的小猪重："<<max << endl;

	return 0;
}