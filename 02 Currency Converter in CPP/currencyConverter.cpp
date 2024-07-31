#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<cmath>
using namespace std;

void USD_PKR() {
	system("cls");
	double currentUSD_PKR = 279.00;
	cout<<"USD -> PKR (1$ = "<<fixed<<setprecision(3)<<currentUSD_PKR<<"PKR)\n";
	cout<<"|------------------------------|\n";
	cout<<"Do you want to update exchange rate? (Y/N) ";
	char opt;
	cin>>opt;

	if(opt == 'y' || opt == 'Y') {
		cout<<"Enter New Exchange Rate USD -> PKR: ";
		cin>>currentUSD_PKR;

		cout<<"USD -> PKR (1$ = "<<fixed<<setprecision(3)<<currentUSD_PKR<<"PKR)\n";
		cout<<"Enter Amount(USD): ";
		float amountUSD;
		cin>>amountUSD;

		float exchanged;
		exchanged = amountUSD * currentUSD_PKR;
		cout<<"Total Amount in PKR: "<<exchanged<<"\n";
	} else {

		cout<<"Enter Amount(USD): ";
		float amountUSD;
		cin>>amountUSD;

		float exchanged;
		exchanged = amountUSD * currentUSD_PKR;
		cout<<"Total Amount in PKR: "<<exchanged<<"\n";
	}
}

void PKR_USD() {
	system("cls");
	double currentPKR_USD = 0.0036;
	cout<<"PKR -> USD (1PKR = "<<fixed<<setprecision(5)<<currentPKR_USD<<"$)\n";
	cout<<"|------------------------------|\n";
	cout<<"Do you want to update exchange rate? (Y/N) ";
	char opt;
	cin>>opt;

	if(opt == 'y' || opt == 'Y') {
		cout<<"Enter New Exchange Rate PKR -> USD: ";
		cin>>currentPKR_USD;

		cout<<"PKR -> USD (1PKR = "<<fixed<<setprecision(5)<<currentPKR_USD<<"$)\n";
		cout<<"Enter Amount(PKR): ";
		float amountPKR;
		cin>>amountPKR;

		float exchanged;
		exchanged = amountPKR * currentPKR_USD;
		cout<<"Total Amount in PKR: "<<exchanged<<"\n";
	} else {

		cout<<"Enter Amount(USD): ";
		float amountPKR;
		cin>>amountPKR;

		float exchanged;
		exchanged = amountPKR * currentPKR_USD;
		cout<<"Total Amount in USD: "<<exchanged<<"\n";
	}
}

void exchangesAvailable() {
	system("cls");
	cout<<"\t------ CURRENCY EXCHANGES AVAILABLE ------\n";
	cout<<"\t |-------------------------------------|\n";
	cout<<"\t |     1. USD to PKR | \t2. PKR to USD  |\n";
	cout<<"\t |-------------------------------------|\n";
	cout<<"\t |     3. USD to INR | \t4. INR to USD  |\n";
	cout<<"\t |-------------------------------------|\n";
	cout<<"\t |     5. USD to GBP | \t6. GBP to USD  |\n";
	cout<<"\t |-------------------------------------|\n";
	cout<<"\t |     7. USD to RUB | \t8. RUB to USD  |\n";
	cout<<"\t |-------------------------------------|\n";
	cout<<"\t |     9. USD to CNY | \t10. CNY to USD |\n";
	cout<<"\t |-------------------------------------|\n";
	cout<<"\t |       CUSTOM CURRENCY EXCHANGE      |\n";
	cout<<"\t |-------------------------------------|\n";
}

void help() {
	system("cls");
	cout<<"\t     -------- [H][E][L][P] --------\n";
	cout<<"\t Press '1' : USD -> PKR (1$ = 279.00PKR)\n";
	cout<<"\t Press '2' : PKR -> USD (1PKR = 0.0036$)\n";
	cout<<"\t Press '3' : USD -> INR (1$ = 83.68INR\n";
	cout<<"\t Press '4' : INR -> USD (1INR = 0.012$)\n";
	cout<<"\t Press '5' : USD -> GBP (1$ = 0.78"<<char(156)<<")\n";
	cout<<"\t Press '6' : GBP -> USD (1"<<char(156)<<" = 1.28$)\n";
	cout<<"\t Press '7' : USD -> RUB (1$ = 84.99RUB)\n";
	cout<<"\t Press '8' : RUB -> USD (1RUB = 0.012$)\n";
	cout<<"\t Press '9' : USD -> CNY (1$ = 7.22CNY)\n";
	cout<<"\t Press '10' : CNY -> USD (1CNY = 0.14$\n\n";
	cout<<"\t Press 'c/C' : CUSTOM EXCHANGE\n\n";
	cout<<"\t Press 'h/H' : Help\n";
	cout<<"\t Press 'a/A' : List available exchanges\n";
	cout<<"\t Press 'e'E : Exit Program\n";
}

int main() {
	char selection;
	bool flag = true;

	while(flag) {
		cout<<"_____________________\n";
		cout<<"Press (a/A) List all available exchanges\n";
		cout<<"Press (h/H) for help\n";
		cout<<"Press (e/E) for exit\n";
		cout<<"_____________________\n";
		cout<<"ENTERT SELECTION: ";
		cin>>selection;

		switch(selection) {
			case '1':
				USD_PKR();
				break;

			case '2':
				PKR_USD();
				break;

			case '3':
				break;

			case '4':
				break;

			case '5':
				break;

			case '6':
				break;

			case '7':
				break;

			case '8':
				break;

			case '9':
				break;

			case '10':
				break;

			case 'a':
			case 'A':
				exchangesAvailable();
				break;

			case 'h':
			case 'H':
				help();
				break;

			case 'e':
			case 'E':
				cout<<"EXITING PROGRAM";
				flag = false;
				break;

			default:
				cout<<"COMMAND NOT FOUND!\n";
				break;
		}
	}
//	exchangesAvailable();
//	help();
}