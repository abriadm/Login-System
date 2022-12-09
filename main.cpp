#include <iostream>
#include <fstream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::ifstream;
using std::ofstream;
using std::endl;

bool IsLoggedIn()
{
	string username, password, un, pw;
	cout << "Enter username: ";
	cin >> username;
	cout << "Enter password: ";
	cin >> password;

	ifstream read("C:\\Users\giveo\OneDrive\Documents\Learn\Learn_C++\C++\Login System" + username + ".txt");
	getline(read, un);
	getline(read, pw);

	if (un == username && pw == password)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int choice;

	cout << "1. Register" << endl;
	cout << "2. Login" << endl;
	cout << "Your Choice: ";
	cin >> choice;

	if (choice == 1)
	{
		string username, password;

		cout << "Create Username: ";
		cin >> username;
		cout << "Create Password: ";
		cin >> password;

		ofstream file;
		file.open("C:\\Users\giveo\OneDrive\Documents\Learn\Learn_C++\C++\Login System" + username + ".txt");
		file << username << endl;
		file << password << endl;
		file.close();

		main();
	}
	else if (choice == 2)
	{
		bool status = IsLoggedIn();

		if (!status)
		{
			cout << "Wrong!!!!!, who the FUCK are You!!!!!!!!" << endl;
			return 0;
		}
		else
		{
			cout << "Welcome Back Dumbass!!!!" << endl;
			return 1;
		}
	}
}
