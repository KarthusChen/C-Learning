#include <iostream>
using namespace std;

int main() {

	int arr1[5] = { 1,3,2,5,4 };
	
	//int start=0	��ʼԪ���±�
	//int end = sizeof(arr)/sizeof(arr[0])-1 ĩβԪ���±�
	//start��end�±�Ԫ�ؽ��л���
	//


	//for (int a = 0; a < 5; a++) 
	//{
	//	cout << arr1[4-a] << endl;
	//}

	int start = 0;
	int end = sizeof(arr1) / sizeof(arr1[0]) - 1;

	while(start<end) 
	{
		int temp = arr1[start];
		arr1[start] = arr1[end];
		arr1[end] = temp;

		start++;
		end--;

	}

	for (int i = 0; i < 5; i++)
	{
		cout << arr1[i] << endl;
	}

	return 0;
}