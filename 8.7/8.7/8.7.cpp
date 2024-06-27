#include <iostream>
using namespace std;

struct student {

	string name;
	int age;
	int score;

};

void printStudents(const student *s) 
{
	//*s->age = 150;after adding "const", once there is operation modifiying, there would be error.

	cout << "Name: " << s->name<<endl;
	cout << "Age: " << s->age << endl;
	cout << "Score: " << s->score << endl;

}


int main() {

	struct student s = { "Jack",18,90 };

	printStudents(&s);

	return 0;
}