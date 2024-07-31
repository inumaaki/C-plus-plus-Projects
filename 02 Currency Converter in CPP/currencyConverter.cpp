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
	cout<<"\t-------- [H][E][L][P] --------\n";
	cout<<"\t Press '1' : USD -> PKR\n";
	cout<<"\t Press '2' : PKR -> USD\n";
	cout<<"\t      3. USD to INR   \t 4. INR to USD\n";
	cout<<"\t      5. USD to GBP   \t 6. GBP to USD\n";
	cout<<"\t      7. USD to RUB   \t 8. RUB to USD\n";
	cout<<"\t      9. USD to CNY   \t10. CNY to USD\n";
}

int main() {
	exchangesAvailable();
//	help();
}