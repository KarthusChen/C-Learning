#include<iostream>
using namespace std;

//ð�������� ����һ ������׵�ַ ������ ���鳤��
void bubblesort(int*arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			//���j>j+1��ֵ����������
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

			}
		}
	}


}

void PrintArray(int* arr)
{
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
}

int main()
{
	//1.create an array
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };

	int len = sizeof(arr) / sizeof(arr[0]);

	//2.create the function and do bubblesort

	//3.print the organized array

	bubblesort(arr, len);

	PrintArray(arr);

	return 0;
}