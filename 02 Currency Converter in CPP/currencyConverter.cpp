#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<cmath>
#include<string.h>
using namespace std;

// Converts from USD -> PKR
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

// Converts from PKR -> USD
void PKR_USD() {
	system("cls");
	double currentPKR_USD = 0.0036;
	cout<<"PKR -> USD (1PKR = "<<fixed<<setprecision(4)<<currentPKR_USD<<"$)\n";
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

// Converts from USD -> INR
void USD_INR() {
	system("cls");
	double currentUSD_INR = 83.68;
	cout<<"USD -> INR (1$ = "<<fixed<<setprecision(3)<<currentUSD_INR<<"INR)\n";
	cout<<"|------------------------------|\n";
	cout<<"Do you want to update exchange rate? (Y/N) ";
	char opt;
	cin>>opt;

	if(opt == 'y' || opt == 'Y') {
		cout<<"Enter New Exchange Rate USD -> INR: ";
		cin>>currentUSD_INR;

		cout<<"USD -> INR (1$ = "<<fixed<<setprecision(3)<<currentUSD_INR<<"INR)\n";
		cout<<"Enter Amount(USD): ";
		float amountUSD;
		cin>>amountUSD;

		float exchanged;
		exchanged = amountUSD * currentUSD_INR;
		cout<<"Total Amount in INR: "<<exchanged<<"\n";
	} else {

		cout<<"Enter Amount(USD): ";
		float amountUSD;
		cin>>amountUSD;

		float exchanged;
		exchanged = amountUSD * currentUSD_INR;
		cout<<"Total Amount in INR: "<<exchanged<<"\n";
	}
};

// Converts from INR -> USD
void INR_USD() {
	system("cls");
	double currentINR_USD = 0.012;
	cout<<"INR -> USD (1INR = "<<fixed<<setprecision(5)<<currentINR_USD<<"$)\n";
	cout<<"|------------------------------|\n";
	cout<<"Do you want to update exchange rate? (Y/N) ";
	char opt;
	cin>>opt;

	if(opt == 'y' || opt == 'Y') {
		cout<<"Enter New Exchange Rate INR -> USD: ";
		cin>>currentINR_USD;

		cout<<"INR -> USD (1INR = "<<fixed<<setprecision(5)<<currentINR_USD<<"$)\n";
		cout<<"Enter Amount(INR): ";
		float amountINR;
		cin>>amountINR;

		float exchanged;
		exchanged = amountINR * currentINR_USD;
		cout<<"Total Amount in USD: "<<exchanged<<"\n";
	} else {

		cout<<"Enter Amount(INR): ";
		float amountINR;
		cin>>amountINR;

		float exchanged;
		exchanged = amountINR * currentINR_USD;
		cout<<"Total Amount in USD: "<<exchanged<<"\n";
	}
};

// Converts from USD -> GBP
void USD_GBP() {
	system("cls");
	double currentUSD_GBP = 0.78;
	cout<<"USD -> GBP (1$ = "<<fixed<<setprecision(3)<<currentUSD_GBP<<char(156)<<")\n";
	cout<<"|------------------------------|\n";
	cout<<"Do you want to update exchange rate? (Y/N) ";
	char opt;
	cin>>opt;

	if(opt == 'y' || opt == 'Y') {
		cout<<"Enter New Exchange Rate USD -> GBP: ";
		cin>>currentUSD_GBP;

		cout<<"USD -> GBP (1$ = "<<fixed<<setprecision(3)<<currentUSD_GBP<<char(156)<<")\n";
		cout<<"Enter Amount(USD): ";
		float amountUSD;
		cin>>amountUSD;

		float exchanged;
		exchanged = amountUSD * currentUSD_GBP;
		cout<<"Total Amount in GBP: "<<exchanged<<"\n";
	} else {

		cout<<"Enter Amount(USD): ";
		float amountUSD;
		cin>>amountUSD;

		float exchanged;
		exchanged = amountUSD * currentUSD_GBP;
		cout<<"Total Amount in GBP: "<<exchanged<<"\n";
	}
};

// Converts from GBP -> USD
void GBP_USD() {
	system("cls");
	double currentGBP_USD = 1.28;
	cout<<"GBP -> USD (1"<<char(156)<<" = "<<fixed<<setprecision(5)<<currentGBP_USD<<"$)\n";
	cout<<"|------------------------------|\n";
	cout<<"Do you want to update exchange rate? (Y/N) ";
	char opt;
	cin>>opt;

	if(opt == 'y' || opt == 'Y') {
		cout<<"Enter New Exchange Rate GBP -> USD: ";
		cin>>currentGBP_USD;

		cout<<"GBP -> USD (1"<<char(156)<<" = "<<fixed<<setprecision(5)<<currentGBP_USD<<"$)\n";
		cout<<"Enter Amount(GBP): ";
		float amountGBP;
		cin>>amountGBP;

		float exchanged;
		exchanged = amountGBP * currentGBP_USD;
		cout<<"Total Amount in USD: "<<exchanged<<"\n";
	} else {

		cout<<"Enter Amount(GBP): ";
		float amountGBP;
		cin>>amountGBP;

		float exchanged;
		exchanged = amountGBP * currentGBP_USD;
		cout<<"Total Amount in USD: "<<exchanged<<"\n";
	}
};

// Converts from USD -> RUB
void USD_RUB() {
	system("cls");
	double currentUSD_RUB = 84.99;
	cout<<"USD -> RUB (1$ = "<<fixed<<setprecision(3)<<currentUSD_RUB<<"RUB)\n";
	cout<<"|------------------------------|\n";
	cout<<"Do you want to update exchange rate? (Y/N) ";
	char opt;
	cin>>opt;

	if(opt == 'y' || opt == 'Y') {
		cout<<"Enter New Exchange Rate USD -> RUB: ";
		cin>>currentUSD_RUB;

		cout<<"USD -> RUB (1$ = "<<fixed<<setprecision(3)<<currentUSD_RUB<<"RUB)\n";
		cout<<"Enter Amount(USD): ";
		float amountUSD;
		cin>>amountUSD;

		float exchanged;
		exchanged = amountUSD * currentUSD_RUB;
		cout<<"Total Amount in RUB: "<<exchanged<<"\n";
	} else {

		cout<<"Enter Amount(USD): ";
		float amountUSD;
		cin>>amountUSD;

		float exchanged;
		exchanged = amountUSD * currentUSD_RUB;
		cout<<"Total Amount in RUB: "<<exchanged<<"\n";
	}
};

// Converts from RUB -> USD
void RUB_USD() {
	system("cls");
	double currentRUB_USD = 0.012;
	cout<<"RUB -> USD (1RUB = "<<fixed<<setprecision(5)<<currentRUB_USD<<"$)\n";
	cout<<"|------------------------------|\n";
	cout<<"Do you want to update exchange rate? (Y/N) ";
	char opt;
	cin>>opt;

	if(opt == 'y' || opt == 'Y') {
		cout<<"Enter New Exchange Rate RUB -> USD: ";
		cin>>currentRUB_USD;

		cout<<"RUB -> USD (1RUB = "<<fixed<<setprecision(5)<<currentRUB_USD<<"$)\n";
		cout<<"Enter Amount(RUB): ";
		float amountRUB;
		cin>>amountRUB;

		float exchanged;
		exchanged = amountRUB * currentRUB_USD;
		cout<<"Total Amount in USD: "<<exchanged<<"\n";
	} else {

		cout<<"Enter Amount(RUB): ";
		float amountRUB;
		cin>>amountRUB;

		float exchanged;
		exchanged = amountRUB * currentRUB_USD;
		cout<<"Total Amount in USD: "<<exchanged<<"\n";
	}
};

// Converts from USD -> CNY
void USD_CNY() {
	system("cls");
	double currentUSD_CNY = 7.22;
	cout<<"USD -> CNY (1$ = "<<fixed<<setprecision(3)<<currentUSD_CNY<<"CNY)\n";
	cout<<"|------------------------------|\n";
	cout<<"Do you want to update exchange rate? (Y/N) ";
	char opt;
	cin>>opt;

	if(opt == 'y' || opt == 'Y') {
		cout<<"Enter New Exchange Rate USD -> CNY: ";
		cin>>currentUSD_CNY;

		cout<<"USD -> CNY (1$ = "<<fixed<<setprecision(3)<<currentUSD_CNY<<"CNY)\n";
		cout<<"Enter Amount(USD): ";
		float amountUSD;
		cin>>amountUSD;

		float exchanged;
		exchanged = amountUSD * currentUSD_CNY;
		cout<<"Total Amount in CNY: "<<exchanged<<"\n";
	} else {

		cout<<"Enter Amount(USD): ";
		float amountUSD;
		cin>>amountUSD;

		float exchanged;
		exchanged = amountUSD * currentUSD_CNY;
		cout<<"Total Amount in CNY: "<<exchanged<<"\n";
	}
};

// Converts from CNY -> USD
void CNY_USD() {
	system("cls");
	double currentCNY_USD = 0.14;
	cout<<"CNY -> USD (1CNY = "<<fixed<<setprecision(5)<<currentCNY_USD<<"$)\n";
	cout<<"|------------------------------|\n";
	cout<<"Do you want to update exchange rate? (Y/N) ";
	char opt;
	cin>>opt;

	if(opt == 'y' || opt == 'Y') {
		cout<<"Enter New Exchange Rate CNY -> USD: ";
		cin>>currentCNY_USD;

		cout<<"CNY -> USD (1CNY = "<<fixed<<setprecision(5)<<currentCNY_USD<<"$)\n";
		cout<<"Enter Amount(CNY): ";
		float amountCNY;
		cin>>amountCNY;

		float exchanged;
		exchanged = amountCNY * currentCNY_USD;
		cout<<"Total Amount in USD: "<<exchanged<<"\n";
	} else {

		cout<<"Enter Amount(CNY): ";
		float amountCNY;
		cin>>amountCNY;

		float exchanged;
		exchanged = amountCNY * currentCNY_USD;
		cout<<"Total Amount in USD: "<<exchanged<<"\n";
	}
};

// Custom Exchange, enter your desired Currency & It's rate to get the conversion.
void customEXC() {
	system("cls");
	cout<<"\t-- CUSTOM EXCHANGE --\n\n";
	cout<<"Enter name of currency available: ";
	string currencyAvail;
	cin>>currencyAvail;
	
	cout<<"Enter name of currency to change: ";
	string currencyExc;
	cin>>currencyExc;
	
	cout<<endl;
	
	cout<<"\t --- Enter Cost of Conversion ---\n";
	cout<<"\t-- (FOLLOW THE FOLLOWING FORMAT) --\n";
	cout<<"\t\t1"<<currencyAvail<<" = "<<"??"<<currencyExc<<"\n\r";
	
	cout<<"\tEnter the Cost of Conversion: ";
	float currencyExcAm;
	cin>>currencyExcAm;
	cout<<"\t\t1"<<currencyAvail<<" = "<<currencyExcAm<<currencyExc<<"\n\n";
	
	cout<<"Enter the amount(in "<<currencyAvail<<") you want in "<<currencyExc<<": ";
	float currencyCon;
	cin>>currencyCon;
	
	float currencyConverted;
	currencyConverted = currencyCon * currencyExcAm;
	cout<<"Amount in "<<currencyExc<<" is: "<<currencyConverted<<currencyExc<<"\n";
};

// List all the exchanges available in the program
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
	cout<<"\t |     9. USD to CNY | \t0. CNY to USD |\n";
	cout<<"\t |-------------------------------------|\n";
	cout<<"\t |       CUSTOM CURRENCY EXCHANGE      |\n";
	cout<<"\t |-------------------------------------|\n";
}

// It will tell us about that which key will perform which function.
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
	cout<<"\t Press '0' : CNY -> USD (1CNY = 0.14$\n\n";
	cout<<"\t Press 'c/C' : CUSTOM EXCHANGE\n\n";
	cout<<"\t Press 'h/H' : Help\n";
	cout<<"\t Press 'x/X' : Clear Screen\n";
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
		cout<<"Press (x/X) to Clear Screen\n";
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
				USD_INR();

				break;

			case '4':
				INR_USD();
				break;

			case '5':
				USD_GBP();
				break;

			case '6':
				GBP_USD();
				break;

			case '7':
				USD_RUB();
				break;

			case '8':
				RUB_USD();
				break;

			case '9':
				USD_CNY();
				break;

			case '0':
				CNY_USD();
				break;

			case 'c':
			case 'C':
				customEXC();
				break;

			case 'a':
			case 'A':
				exchangesAvailable();
				break;

			case 'h':
			case 'H':
				help();
				break;
				
			case 'x':
			case 'X':
				system("cls"); // It'll clear the screen for easy reading.
				break;

			case 'e':
			case 'E':
				cout<<"EXITING PROGRAM"; // It exits the program.
				flag = false;
				break;

			default:
				cout<<"COMMAND NOT FOUND!\n"; // It'll return an error if wrong function key is pressed.
				break;
		}
	}
}