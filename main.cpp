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

	ifstream read("data\\" + username + ".txt");
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
	string username, password;
	int choice;
	ofstream file;
	bool status = IsLoggedIn();

	cout << "1. Register" << endl;
	cout << "2. Login" << endl;
	cout << "Your Choice: ";
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "Create Username: ";
		cin >> username;
		cout << "Create Password: ";
		cin >> password;

		file.open("data\\" + username + ".txt");
		file << username << endl;
		file << password << endl;
		file.close();
		main();
		break;
	case 2:
		if (!status)
		{
			cout << "Wrong!!!!!, who the Fuck are u!!!!!!" << endl;
		}
		else
		{
			cout << "Welcome Back!!!" << endl;
		}
		break;
	default:
		break;
	}
	return 0;
}