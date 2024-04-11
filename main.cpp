#include <iostream>
#include <string>
#include <vector>
using namespace std;

// My Class

class BankAccount
{
public:
	string name;
	long float balance;
	string address;
	string id;
	
	// Taxes, bills
	float rent;
	float electricity;
	float gas;
	float internet;
	float insurance;
	float cable;	

	// Functions

	void WithDraw()
	{
		// Ask for withdraw ammount
		float withdraw_ammount;
		cout << "How much money in dollars would you like to withdraw? \n";
		cin >> withdraw_ammount;

		balance -= withdraw_ammount;
		cout << "Your balance after the withdraw is $" << balance << "\n";
	}

	void DepositMoney()
	{	
		// Ask for deposit ammount
		float deposit_ammount;
		cout << "How much money would you like to deposit? \n";
		cin >> deposit_ammount;

		balance += deposit_ammount;
		cout << "You have just deposited $" << deposit_ammount << ". You now have $" << balance << "\n";
	}

	void PayTaxes()
	{
		cout << "Your monthly taxes, bills are: rent, electricity, gas, internet, insurance, cable are due soon. \n";
		cout << "Monthly Rent: $" << rent << "\n";
		cout << "Electricity Bill: $" << electricity << "\n";
		cout << "Gas Bill: $" << gas << "\n";
		cout << "Internet Bill: $" << internet << "\n";
		cout << "Insurance: $" << insurance << "\n";
		cout << "Cable TV Bill: $" << cable << "\n";
	}
};


int main()
{
	BankAccount account1;
	account1.name = "User";
	account1.balance = 3000;

	account1.rent = 2000;
	account1.electricity = 300;
	account1.gas = 500;
	account1.internet = 100;
	account1.insurance = 600;
	account1.cable = 50;

	cout << account1.name << " has $" << account1.balance << "\n";

	account1.WithDraw();
	account1.DepositMoney();


	// Other Banks Accounts

	BankAccount account2;
	account2.name = "User2";
	account2.balance = 5200;

	cout << account2.name << " has $" << account2.balance << "\n";

	account2.WithDraw();
	account2.DepositMoney();

	return 0;
}