#include <iostream>
using namespace std;
int main() {

	 //break ��ʹ��ʱ��

	//1.������swicth�����
	cout << "��ѡ�񸱱��Ѷ�" << endl;
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

	//2.������ѭ�������
	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
		if (i == 5)break;//�˳�ѭ��
	}

	//3.������Ƕ��ѭ�������
	for (int b = 0; b < 10; b++) {
		for (int a = 0; a < 10; a++) {
			cout << "*";
			if (a == 5)break;
		}
		cout << endl; 
	}
	



	return 0;
}