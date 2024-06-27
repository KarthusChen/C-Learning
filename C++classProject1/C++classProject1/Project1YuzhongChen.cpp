#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct userAccount
{
	string username;
	string nationality;
	int age;
	double accountBalance;
};

int main()
{
	userAccount users[20];
	int userCount = 0;

	cout << "Please enter information to database in the format of <username><age><nationality><accountBalance>,separated each user by a new line:"<<endl;

	while (cin >> users[userCount].username >> users[userCount].nationality >> users[userCount].age >> users[userCount].accountBalance) {
		userCount++;
		if (userCount >= 20) {
			break;  
		}
	}
	
	double highest = 0.0;
	for (int i = 0; i < userCount; i++)
	{
		if (users[i].accountBalance > highest)
		{
			highest = users[i].accountBalance;
		}
	};
	cout << "Q: What's the highest account balance among all users?" << endl;
	cout << "A: $" << highest << endl;

	double SUM = 0.0;
	for (int i = 0; i < userCount; i++)
	{
		SUM += users[i].accountBalance;
	};
	cout<< "Q: What's the sum of account balance of all users?" << endl;
	cout << "A: $" << SUM << endl;

	int swedish = 0;
	for (int i = 0; i < userCount; i++)
	{
		if (users[i].nationality == "Swedish")
		{
			swedish++;
		}
	}
	cout << "Q: How many users come from Sweden?" << endl;
	cout << "A: " << swedish << endl;

	bool Young = false;
	for (int i = 0; i < userCount; i++)
	{
		if (users[i].age < 21)
		{
			Young = true;
			break;
		}
	}
	cout << "Q: Do we have any user younger than 21?" << endl;
	cout << "A: " << (Young ? "Yes" : "NO") << endl;

	return 0;
}
