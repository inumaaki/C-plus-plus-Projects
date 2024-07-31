#include<iostream>
#include<stdlib.h>
#include<cmath>
using namespace std;

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
}

void help() {
	system("cls");
	cout<<"\t     -------- [H][E][L][P] --------\n";
	cout<<"\t Press '1' : USD -> PKR (1$ = 278.65PKR)\n";
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
	cout<<"\t Press 'e'E : Exit Program\n";
}

int main() {
	char selection;
	bool flag = true;
	
	while(flag){
		cout<<"_____________________\n";
		cout<<"Press (h/H) for help\n";
		cout<<"Press (e/E) for exit\n";
		cout<<"_____________________\n";
		cout<<"ENTERT SELECTION: ";
		cin>>selection;
		switch(selection){
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