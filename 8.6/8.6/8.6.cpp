#include <iostream>
using namespace std;

struct student {

	string name;
	int age;
	int score;

};

void printStudent1(struct student a ) {

	cout << "Print name in SubFunction: " << a.name << endl;
	cout << "Print age in SubFunction: " << a.age << endl;
	cout << "Print score in SubFunction: " << a.score << endl;
		 
}

void printStudent2(struct student * a) {

	cout << "Print name in SubFunction: " << a->name << endl;
	cout << "Print age in SubFunction: " << a->age << endl;
	cout << "Print score in SubFunction: " << a->score << endl;


}


int main() {

	student s;
	s.name = "Jack";
	s.age = 18;
	s.score = 84;

	printStudent1(s);

	cout << endl;

	printStudent2(&s);

	//cout << "Print name in Function main: " << s.name << endl;
	//cout << "Print age in Function main: " << s.age << endl;
	//cout << "Print score in Function main: " << s.score << endl;

	return 0;
}