#include<iostream>
using namespace std;

struct student {

	string name;
	int age;
	int score;

};


struct teacher {

	int id;
	string name;
	int age;
	struct student stu;

};



int main() {

	teacher t;
	t.id = 200;
	t.name = "jack";
	t.age = 50;
	t.stu.age = 20;
	t.stu.score = 160;

	cout << "Teacher's Name " << t.name << " Teacher's ID " << t.id
		<< " Teacher's Age " << t.stu.age << " Student's Age " << t.stu.age
		<< " Student's Score" << t.stu.score << endl;


	return 0;
}