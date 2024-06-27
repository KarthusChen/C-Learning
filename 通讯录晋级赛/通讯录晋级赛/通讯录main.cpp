#include <iostream>
#define MAX 1000

using namespace std;

void showMenu() {
	cout << " ******************************" << endl;
	cout << " *****1. Add Contacts. *********"<< endl;
	cout << " *****2. Show Contacts. *******" << endl;
	cout << " *****3. Delete Contacts. *****" << endl;
	cout << " *****4. Check Contacts. ******" << endl;
	cout << " *****5. Modify Contacts. *****" << endl;
	cout << " *****6. Clear all Contacts. **" << endl;
	cout << " *****0. Exit the Menu. *******" << endl;
	cout << " ******************************" << endl;
};

struct contact {

	string name;
	int gender;
	int age;
	string number;
	string address;

};

struct book {
	struct contact Array[MAX];

	int howmany;
};

void add(book*abs) {
	if (abs->howmany == MAX) {
		cout << "The Address Book is FULL!!!" << endl;
		return;
	}
	else
	{
		//add contact now
		string name;
		cout << "Please enter the name of the contact:" << endl;
		cin >> name; 
		abs->Array[abs->howmany].name = name;

		cout << "Please enter the gender of the contact:" << endl;
		cout << "1----Male" << endl;
		cout << "2----Female" << endl;
		int gender = 0;

		while (true)
		{
			cin >> gender;
			if (gender == 1 || gender == 2)
			{
				abs->Array[abs->howmany].gender = gender;
				break;
			}
			
			cout << "Please Enter 1 or 2!!" << endl;
		}

		cout << "Please Enter Age:" << endl;
		int age = 0;
		cin >> age;
		abs->Array[abs->howmany].age = age;

		cout << "Please Enter Telephone Number:" << endl;
		string number;
		cin >> number;
		abs->Array[abs->howmany].number = number;

		cout << "Please Enter the Address:" << endl;
		string address;
		cin >> address;
		abs->Array[abs->howmany].address = address;

		abs->howmany++;

		cout << "Completed!!!" << endl;

		system("pause");//请按任意键继续
		system("cls");//清屏
	}
}

void show(book* abs)
{
	if (abs->howmany == 0)
	{
		cout << "You don't have any contact yet!" << endl;
	}
	else
	{
		for (int i = 0; i < abs->howmany; i++)
		{
			cout << "Name: " << abs->Array[i].name << endl;
			cout << "Gender: " << (abs->Array[i].gender == 1?"male":"female") << endl;
			cout << "Age: " << abs->Array[i].age << endl;
			cout << "Telephone Number: " << abs->Array[i].number << endl;
			cout << "Address: " << abs->Array[i].address << endl;
			cout << endl;
		}
		
	}
	system("pause");
	system("cls");

}

int Exist(book*abs,string name) 
{
	for (int i = 0; i < abs->howmany; i++)
	{
		if (abs->Array[i].name == name)
		{
			return i;
		}

	}
	return -1;
}

void deletePerson(book* abs)
{
	cout << "Please Enter the Name of Contact You Are Trying to Delete" << endl;

	string name;
	cin >> name;

	int ret = Exist(abs, name);
	if (ret == -1)
	{
		cout << "the contact doen't exist";
		
	}

	else {
		cout << "found it,are you sure you want to delete"<< name <<" ? " << endl;
		cout << "press 1 for yes, press 2 for no" << endl;
		int x = 0;
		while (true)
		{
			cin >> x;
			if (x == 1)
			{
				for (int i = ret; i < abs->howmany; i++)
				{
					abs->Array[i] = abs->Array[i + 1];
				}
				abs->howmany--;

				cout << "deleted" << endl;
				
				break;
			}
			else if (x == 2)
			{
				cout << "Press Anything to Get Back to Main Menu" << endl;
				
				break;
			}
			else
			{
				cout << "Please Enter 1 or 2!" << endl;
			}
		}
	}
	system("pause");
	system("cls");
}

void find(book* abs)
{
	cout << "Please enter the name of the contact you are looking for:" << endl;
	string name;
	cin >> name;

	int ret = Exist(abs, name);
	if (ret == -1)
	{
		cout << "the contact doesn't exist" << endl;

	}
	else
	{
		cout << "Name: " << abs->Array[ret].name << endl;
		cout << "Gender: " << (abs->Array[ret].gender == 1 ? "male" : "female") << endl;
		cout << "Age: " << abs->Array[ret].age << endl;
		cout << "Telephone Number: " << abs->Array[ret].number << endl;
		cout << "Address: " << abs->Array[ret].address << endl;
		cout << endl;

	}

	system("pause");
	system("cls");

}

void modify(book* abs)
{
	cout << "Please enter the name of the contact you are looking for:" << endl;
	string name;
	cin >> name;

	int ret = Exist(abs, name);
	if (ret == -1)
	{
		cout << "the contact doesn't exist" << endl;

	}
	else
	{
		cout << "Name: " << abs->Array[ret].name << endl;
		cout << "Gender: " << (abs->Array[ret].gender == 1 ? "male" : "female") << endl;
		cout << "Age: " << abs->Array[ret].age << endl;
		cout << "Telephone Number: " << abs->Array[ret].number << endl;
		cout << "Address: " << abs->Array[ret].address << endl;
		cout << endl;
		cout << "Which one would you like to modify?" << endl;
		cout << "Press 1 for Name, Press 2 for Gender, Press 3 for Age." << endl;
		cout << "Press 4 for Telephone Number, Press 5 for Address." << endl;

		int i = 0;

		cin >> i;

		switch (i)
		{
		case 1:
			cout << "Enter the new name of the contact please:" << endl;
			cin >> abs->Array[ret].name;
			break;
		case 2:
			cout << "Enter the new gender of the contact please:" << endl;
			cin >> abs->Array[ret].gender;
			break;
		case 3:
			cout << "Enter the new Age of the contact please:" << endl;
			cin >> abs->Array[ret].age;
			break;
		case 4:
			cout << "Enter the new Telephone Number of the contact please:" << endl;
			cin >> abs->Array[ret].number;
			break;
		case 5:
			cout << "Enter the new Address of the contact please:" << endl;
			cin >> abs->Array[ret].address;
			break;
		}

		cout << "Here is the new contact information:" << endl;
		cout << "Name: " << abs->Array[ret].name << endl;
		cout << "Gender: " << (abs->Array[ret].gender == 1 ? "male" : "female") << endl;
		cout << "Age: " << abs->Array[ret].age << endl;
		cout << "Telephone Number: " << abs->Array[ret].number << endl;
		cout << "Address: " << abs->Array[ret].address << endl;
	}

	system("pause");
	system("cls");

}

void clear(book* abs)
{
	abs->howmany = 0;
	cout << "Your AddressBook is clear now."<< endl;
	system("pause");
	system("cls");
}

int main() 
{
	struct book abs;

	abs.howmany = 0;

	int select = 0;

	while (true)
	{

		showMenu();
		

		

		cin >> select;

		switch (select)
		{
		case 1://add contact
			add(&abs);//一定要用地址传递才能改实参
			break;
		case 2://show contact
			show(&abs);
			break;
		case 3://delete
			deletePerson(&abs);
			break;
		case 4://find
			find(&abs);
			break;
		case 5://modify
			modify(&abs);
			break;
		case 6://clear
			clear(&abs);
			break;
		case 0://exit
			cout << "Thank You For Using!!!" << endl;
			return 0;
			break;
		}

	};
	




	return 0;
}