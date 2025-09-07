#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class BankAccount {
	private:
		int accountNumber;
		string accountName;
		double balance;

	public:
		BankAccount() {
			int accNum;
			cout << "Enter Account Number: ";
			cin >> accNum;

			cin.ignore();

			string accHolName;
			cout << "Enter Account Holder Name: ";
			getline(cin, accHolName);

			double initBalance = 0.0;
			cout << "Enter Your Initial Balance: ";
			cin >> initBalance;

			accountNumber = accNum;
			accountName = accHolName;
			balance = initBalance;
		}

		void deposit(double amount) {
			if (amount > 0) {
				balance += amount;

				cout << "Your amount PKR " << amount << " has been deposited successfully!\n\n";

				cout << "Account Description\n";
				cout << "Account Number: " << accountNumber << endl;
				cout << "Account Title: " << accountName << endl;
				cout << "Account Balance: PKR " << balance << endl;
			} else {
				cout << "Invalid amount. Enter a value greater than zero.\n";

				char choice;
				cout << "\nTry again? Enter 'Y' for Yes or 'N' for No: ";
				cin >> choice;

				if (choice == 'Y' || choice == 'y') {
					double newAmount;
					cout << "Enter deposit amount: ";
					cin >> newAmount;
					deposit(newAmount);
				} else {
					cout << "Deposit cancelled.\n";
				}
			}
		}

		void withdraw(double amountWith) {
			if (amountWith > 0 && amountWith <= balance) {
				balance -= amountWith;
				cout << "Amount Withdrawal Successful!\n";
				cout << "Your amount PKR " << amountWith << " has been withdrawn successfully!\n\n";
				cout << "Account Description\n";
				cout << "Account Number: " << accountNumber << endl;
				cout << "Account Title: " << accountName << endl;
				cout << "Account Balance: PKR " << balance << endl;
			} else {
				cout << "Invalid amount. Enter correct value.\n";

				char choice;
				cout << "\nTry again? Enter 'Y' for Yes or 'N' for No: ";
				cin >> choice;

				if (choice == 'Y' || choice == 'y') {
					double newAmount;
					cout << "Enter withdrawal amount: ";
					cin >> newAmount;
					withdraw(newAmount);
				} else {
					cout << "Withdrawal cancelled.\n";
				}
			}
		}

		void checkBalance() {
			cout << "Account Title: " << accountName << endl;
			cout << "Account Number: " << accountNumber << endl;
			cout << "Account Balance: PKR " << balance << endl;
		}

		void clearscreen() {
			system("cls");
		}
		
		void pause(){
			system("pause");
		}
};

int main() {
	cout<<"-- W E L C O M E -- \n";
	cout<<"-- Enter Your Information -- \n";
	
	BankAccount myAccount;
	char chkC;
	bool chk = true;

	while(chk) {
		cout << "\nSelect a Valid Option:\n";
		cout << "0. Create New Account (Already created)\n";
		cout << "1. Deposit\n";
		cout << "2. Withdraw\n";
		cout << "3. Check Balance\n";
		cout << "4. Exit\n\n";
		cout<<"Enter your choice: ";
		cin >> chkC;
		myAccount.clearscreen();
		
		switch(chkC) {
			case '1': {
				cout<<"-- D E P O S I T -- \n\n";
				double depositAmount;
				cout << "\nEnter amount to deposit: ";
				cin >> depositAmount;
				myAccount.deposit(depositAmount);
				myAccount.pause();
				myAccount.clearscreen();
				break;
			}
			case '2': {
				cout<<"-- W I T H D R A W -- \n\n";
				double withdrawAmount;
				cout << "\nEnter amount to withdraw: ";
				cin >> withdrawAmount;
				myAccount.withdraw(withdrawAmount);
				myAccount.pause();
				myAccount.clearscreen();
				break;
			}
			case '3':
				cout<<"-- C H E C K - B A L A N C E -- \n\n";
				myAccount.checkBalance();
				myAccount.pause();
				myAccount.clearscreen();
				break;

			case '4':
				chk = false;
				cout << "Exiting the program.\n";
				break;

			default:
				cout << "\nInvalid Choice\n";
		};
	}

	return 0;
}