#include <iostream>

using namespace std;

int const PASS = 1234;

void userMenu();
void adminMenu();
bool authorization();
// HELLO

int main()
{
	userMenu();
	return 0;
}

bool authorization()
{
	system("cls");

	int password = 0;
	int counter = 0;

	while (true)
	{
		cout << "Please, enter the password: ";
		cin >> password;

		if (password == PASS)
		{
			return true;
		}
		
		if (counter == 2) {
			cout << "Error! CoffeeBox is blocked.";
			return false;
		}

		counter++;	
		
	}
	
}

void userMenu()
{
	system("cls");

	int num = 0;

	cout << "\tMenu" << endl;
	cout << "0.0 BYN" << endl;
	cout << "1 - Add a coin" << endl;
	cout << "2 - Order an espresso" << endl;
	cout << "3 - Order a cappuccino" << endl;
	cout << "4 - Order an americano" << endl;
	cout << "5 - Service menu" << endl;
	cout << "Enter the number: ";

	cin >> num;

	switch (num)
	{
	case 1:;
	case 2:;
	case 3:;
	case 4:;
	case 5:
		if (authorization()) adminMenu();	
		break;
	default:
		cout << "Error! Wrong number.";
		break;
	}
}

void adminMenu()
{
	system("cls");

	int num = 0;

	cout << "\tAdmin menu" << endl;
	cout << "1 - View balance" << endl;
	cout << "2 - Withdrawal of proceeds" << endl;
	cout << "3 - View the number of empty cups" << endl;
	cout << "4 - Add empty cups" << endl;
	cout << "5 - Return to main menu" << endl;
	cout << "Enter the number: ";

	cin >> num;

	switch (num)
	{
	case 1:;
	case 2:;
	case 3:;
	case 4:;
	case 5:
		userMenu();
		break;
	default:
		cout << "Error! Wrong number.";
		break;
	}
}