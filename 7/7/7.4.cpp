#include<iostream>
using namespace std;
int main() {

	//��ָ��
	//1.��ָ�����ڸ�ָ��������г�ʼ��

	//int* p = NULL;

	//2.��ָ���ǲ����Խ��з��ʵ�
	//0~255֮����ڴ�����ϵͳռ�õģ���˲����Է���

	/*cout << *p << endl;*/

	//Ұָ��
	//�ڳ����У������������Ұָ��
	int* p = (int*)0x1100;

	cout << *p << endl;


	return 0;
}