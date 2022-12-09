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
	string username, password;
	int choice;
	ofstream file;
	bool status = IsLoggedIn();

	cout << "1. Register" << endl;
	cout << "2. Login" << endl;
	cout << "Your Choice: ";
	cin >> choice;

	return 0;
}
//bugg