#include<iostream>
using namespace std;

//结构体指针
struct student
{
	string name;
	int age = 0;
	int score = 0;
};
int main()
{
	struct student s = { "Jack",18,100 };
	
	struct student* p = &s;

	cout << "name:" << p->name << " age:" << p->age << " score:" << p->score << endl;

	return 0;
}