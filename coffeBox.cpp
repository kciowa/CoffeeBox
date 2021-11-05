#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int const PASS = 1234;
int cups = 7;
double cash = 0.0;
double balance = 0.0;
double const ESPRESSO = 1.80;
double const CAPPUCCINO = 2.30;
double const AMERICANO = 1.80;

void userMenu();
void adminMenu();
bool authorization();
void showCashBalance();
void loading(int index);
void getProceeds();
void showCups();
void addCups();
void coinMenu();
double addCoin(double balance);
void orderEspresso();
void orderCappuccino();
void orderAmericano();

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
			Sleep(1000);
			return false;
		}

		counter++;	
	}
}

void userMenu()
{
	system("cls");

	int num = 0;

	cout << "\tMenu";
	cout << "\t" << balance << " BYN" << endl;
	cout << "1 - Add a coin" << endl;
	cout << "2 - Order an espresso (1.80)" << endl;
	cout << "3 - Order a cappuccino (2.30)" << endl;
	cout << "4 - Order an americano (1.80)" << endl;
	cout << "5 - Service menu" << endl;
	cout << "Enter the number: ";

	cin >> num;

	switch (num)
	{
	case 1:
		if (cups == 0)
		{
			system("cls");
			cout << "Sorry, the cups are out." << endl;
			Sleep(3000);
			userMenu();
		}
		else if (cups < 5)
		{
			system("cls");
			cout << "Attention: less than 5 cups left." << endl;
			Sleep(1000);
		}
		else
		{
			cout << endl;
		}
		coinMenu();
		break;
	case 2:
		if (cups == 0)
		{
			system("cls");
			cout << "Sorry, the cups are out." << endl;
			Sleep(3000);
			userMenu();
		}
		else if (cups < 5)
		{
			system("cls");
			cout << "Attention: less than 5 cups left." << endl;
			Sleep(1000);
		}
		else
		{
			cout << endl;
		}
		orderEspresso();
		break;
	case 3:
		if (cups == 0)
		{
			system("cls");
			cout << "Sorry, the cups are out." << endl;
			Sleep(3000);
			userMenu();
		}
		else if (cups < 5)
		{
			system("cls");
			cout << "Attention: less than 5 cups left." << endl;
			Sleep(1000);
		}
		else
		{
			cout << endl;
		}
		orderCappuccino();
		break;
	case 4:
		if (cups == 0)
		{
			system("cls");
			cout << "Sorry, the cups are out." << endl;
			Sleep(3000);
			userMenu();
		}
		else if (cups < 5)
		{
			system("cls");
			cout << "Attention: less than 5 cups left." << endl;
			Sleep(1000);
		}
		else
		{
			cout << endl;
		}
		orderAmericano();
		break;
	case 5:
		if (authorization()) adminMenu();	
		break;
	default:
		cout << "Error! Wrong number.";
		Sleep(800);
		userMenu();
	}
}

void adminMenu()
{
	while (true) {
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
		case 1:
			showCashBalance();
			break;
		case 2:
			getProceeds();
			break;
		case 3:
			showCups();
			break;
		case 4:
			addCups();
			break;
		case 5:
			userMenu();
			break;
		default:
			cout << "Error! Wrong number.";
			Sleep(800);
			adminMenu();
		}
	}
}

void showCashBalance() 
{
	system("cls");
	cout << "Current balance: " << cash << " BYN" << endl;
	_getch();
}

void showCups()
{
	system("cls");
	cout << cups << " cups left" << endl;
	_getch();
}

void addCups() 
{
	system("cls");

	int cup = 0;

	cout << "How many cups have been added? ";
	cin >> cup;

	if ((cups + cup) >= 700) {
		cout << "Too many cups, add less!";
		_getch();
		addCups();
	}
	
	cups += cup;

	cout << "Now there are " << cups << " cups in the vending machine";
	_getch();
}

void getProceeds() 
{
	system("cls");

	cout << "Wait, the money is being loaded" << endl;
	Sleep(1500);
	loading(6);
	system("cls");

	cash = 0;
	balance = 0;

	cout << "Upload completed, current balance: " << balance << " BYN" << endl;
	_getch();
}

void loading(int index) 
{
	system("cls");
	for (int i = 0; i<index; i++) {

		cout << "\b\b\b\b\b\b\b\b\b\bLoading" << flush;
		Sleep(100);
		cout << "\b\b\b\b\b\b\b\b\b\bLOading" << flush;
		Sleep(100);
		cout << "\b\b\b\b\b\b\b\b\b\bLoAding" << flush;
		Sleep(100);
		cout << "\b\b\b\b\b\b\b\b\b\bLoaDing" << flush;
		Sleep(100);
		cout << "\b\b\b\b\b\b\b\b\b\bLoadIng" << flush;
		Sleep(100);
		cout << "\b\b\b\b\b\b\b\b\b\bLoadiNg" << flush;
		Sleep(100);
		cout << "\b\b\b\b\b\b\b\b\b\bLoadinG" << flush;
		Sleep(100);
		cout << "\b\b\b\b\b\b\b\b\b\bLoading." << flush;
		Sleep(100);
		cout << "\b\b\b\b\b\b\b\b\b\bLoading.." << flush;
		Sleep(100);
		cout << "\b\b\b\b\b\b\b\b\b\bLoading..." << flush;
		Sleep(100);
	}
}

void coinMenu()
{
	system("cls");
	int num = 0;

	cout << "1 - 0.10 BYN" << endl;
	cout << "2 - 0.20 BYN" << endl;
	cout << "3 - 0.50 BYN" << endl;
	cout << "4 - 1 BYN" << endl;
	cout << "5 - 2 BYN" << endl;
	cout << "Enter the number: ";

	cin >> num;

	switch (num)
	{
	case 1:
		addCoin(0.10);
		userMenu();
		break;
	case 2:
		addCoin(0.20);
		userMenu();
		break;
	case 3:
		addCoin(0.50);
		userMenu();
		break;
	case 4:
		addCoin(1);
		userMenu();
		break;
	case 5:
		addCoin(2);
		userMenu();
		break;
	default:
		cout << "Error! Wrong number.";
		userMenu();
	}
}

double addCoin(double x)
{
	cash += x;
	balance += x;
	return balance;
}

void orderEspresso()
{
	if (balance >= ESPRESSO)
	{
		loading(7);
		system("cls");
		cout << "Coffee is ready!" << endl;
		Sleep(3500);

		balance -= ESPRESSO;
		cups--;
		userMenu();
	}
	else
	{
		userMenu();
	}
}

void orderCappuccino()
{
	if (balance >= CAPPUCCINO)
	{
		loading(7);
		system("cls");
		cout << "Coffee is ready!" << endl;
		Sleep(3500);

		balance -= CAPPUCCINO;
		cups--;
		userMenu();
	}
	else
	{
		userMenu();
	}
}

void orderAmericano()
{
	if (balance >= AMERICANO)
	{
		loading(7);
		system("cls");
		cout << "Coffee is ready!" << endl;
		Sleep(3500);

		balance -= AMERICANO;
		userMenu();
		cups--;
	}
	else
	{
		userMenu();
	}
}