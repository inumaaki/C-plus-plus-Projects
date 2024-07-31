#include<iostream>
#include<cmath>
#include<string.h>
#include<stdlib.h>
using namespace std;

// Addition Function
void addition() {
	system("cls");
	cout<<"\nADDITION\n";
	cout<<"_____________________\n";
	float a,b;
	a = 0;
	b = 0;

	cout<<"Enter value of 1st number: ";
	cin>>a;

	cout<<"Enter value of 2nd number: ";
	cin>>b;

	float sum;
	sum = a + b;
	cout<<"\nThe sum of two numbers is: "<<sum<<endl;
}

// Subtraction Function
void subtraction() {
	system("cls");
	cout<<"\nSUBTRACTION\n";
	cout<<"_____________________\n";
	float a,b;
	a = 0;
	b = 0;

	cout<<"Enter value of 1st number: ";
	cin>>a;

	cout<<"Enter value of 2nd number: ";
	cin>>b;

	float sub;
	sub = a - b;
	cout<<"\nThe subtraction of two numbers is: "<<sub<<endl;
}

// Multiplication Function
void multiplication() {
	system("cls");
	cout<<"\nMULTIPLICATION\n";
	cout<<"_____________________\n";
	float a,b;
	a = 0;
	b = 0;

	cout<<"Enter value of 1st number: ";
	cin>>a;

	cout<<"Enter value of 2nd number: ";
	cin>>b;

	float multiply;
	multiply = a * b;
	cout<<"\nThe multiplication of two numbers is: "<<multiply<<endl;
}

// Division Function
void division() {
	system("cls");
	cout<<"\nDIVISION\n";
	cout<<"_____________________\n";
	float a,b;
	a = 0;
	b = 0;

	cout<<"Enter value of 1st number: ";
	cin>>a;

	cout<<"Enter value of 2nd number: ";
	cin>>b;

	float div;
	div = a / b;
	cout<<"\nThe division of two numbers is: "<<div<<endl;
}

// SINE Function
void sineFunc() {
	system("cls");
	cout<<"\nDIVISION\n";
	cout<<"_____________________\n";
	float a,b;
	a = 0;
	b = 0;

	cout<<"Enter value: ";
	cin>>a;

	b = sin(a);
	cout<<"\nThe sin of \'"<<a<<"\' is: "<<b<<endl;
}

// COSINE Function
void cosineFunc() {
	system("cls");
	cout<<"\nCOSINE\n";
	cout<<"_____________________\n";
	float a,b;
	a = 0;
	b = 0;

	cout<<"Enter value: ";
	cin>>a;

	b = cos(a);
	cout<<"\nThe cos of \'"<<a<<"\' is: "<<b<<endl;
}

// TANGENT Function
void tangentFunc() {
	system("cls");
	cout<<"\nTANGENT\n";
	cout<<"_____________________\n";
	float a,b;
	a = 0;
	b = 0;

	cout<<"Enter value: ";
	cin>>a;

	b = tan(a);
	cout<<"\nThe tan of \'"<<a<<"\' is: "<<b<<endl;
}

// LOG Function
void logarithmFunc() {
	system("cls");
	cout<<"\nLOGARITHM\n";
	cout<<"_____________________\n";
	float a,b;
	a = 0;
	b = 0;

	cout<<"Enter value: ";
	cin>>a;

	b = log(a);
	cout<<"\nThe log of \'"<<a<<"\' is: "<<b<<endl;
}

// BASE10 Log Function
void BaseLogFunc() {
	system("cls");
	cout<<"\nBASE LOGARITHM\n";
	cout<<"_____________________\n";
	float a,b;
	a = 0;
	b = 0;

	cout<<"Enter value for calculating LOG with BASE10: ";
	cin>>a;

	b = log10(a);
	cout<<"\nThe Base log of \'"<<a<<"\' is: "<<b<<endl;
}

// POWER Function
void powerFunc() {
	system("cls");
	cout<<"\nPOWER\n";
	cout<<"_____________________\n";
	float a,b;
	a = 0;
	b = 0;

	cout<<"Enter No. ";
	cin>>a;

	cout<<"Enter it's exponent: ";
	cin>>b;

	float expo;
	expo = pow(a,b);
	cout<<"\nThe power of \'"<<a<<"\' is: "<<expo<<endl;
}

// Square of a Number
void squareFunc() {
	system("cls");
	cout<<"\nSQUARE\n";
	cout<<"_____________________\n";
	float a;
	a = 0;

	cout<<"Enter No. ";
	cin>>a;

	float sq;
	sq = a * a;

	cout<<"\nThe square of \'"<<a<<"\' is: "<<sq<<endl;
}

// Square Root of a Number
void SqRootFunc() {
	system("cls");
	cout<<"\nSQUARE ROOT\n";
	cout<<"_____________________\n";

	float a;
	a = 0;

	cout<<"Enter No. ";
	cin>>a;

	float squrt;
	squrt = sqrt(a);

	cout<<"\nThe square root of \'"<<a<<"\' is: "<<squrt<<endl;
}

// Find nth Root of a Number
void nth_RootFunc() {
	system("cls");
	cout<<"\nnth ROOT\n";
	cout<<"_____________________\n";

	float a,b;
	a = 0;
	b = 0;

	cout<<"Enter No. ";
	cin>>a;

	cout<<"Enter Root: ";
	cin>>b;

	float rootVal;
	rootVal = 1/b;

	float nth_root;
	nth_root = pow(a, rootVal);

	cout<<"\nThe nth root of \'"<<a<<"\' is: "<<nth_root<<endl;
}

// Display all the functions in the program
void help() {
	system("cls");
	cout<<"\nHELP\n";
	cout<<"_____________________\n";
	cout<<"- Press (a/A) for Addition\n";
	cout<<"- Press (s/S) for Subtraction\n";
	cout<<"- Press (m/M) for Multiplication\n";
	cout<<"- Press (d/D) for Division\n";
	cout<<"- Press '1' for Sine (sin)\n";
	cout<<"- Press '2' for Cosine (cos)\n";
	cout<<"- Press '3' for Tangent (tan)\n";
	cout<<"- Press '4' for Logarithm (log)\n";
	cout<<"- Press '5' for Base Logarithm (base log)\n";
	cout<<"- Press '6' for Power/Exponentiation (power)\n";
	cout<<"- Press '7' for Square (square)\n";
	cout<<"- Press '8' for Square Root (square root)\n";
	cout<<"- Press '9' for nth Root of a Number\n";
	cout<<"- Press (h/H) to display al possible functions in program\n";
	cout<<"- Press (e/E) for exiting program\n";
}

int main() {
	char type;
	bool flag = true;

	while(flag) {
		cout<<"_____________________\n";
		cout<<"Press (h/H) for help\n";
		cout<<"Press (e/E) for exit\n";
		cout<<"_____________________\n";
		cout<<"Select Function: ";
		cin>>type;

		switch(type) {
			case 'a':
			case 'A':
				addition();
				break;

			case 's':
			case 'S':
				subtraction();
				break;

			case 'm':
			case 'M':
				multiplication();
				break;

			case 'd':
			case 'D':
				division();
				break;

			case '1':
				sineFunc();
				break;

			case '2':
				cosineFunc();
				break;

			case '3':
				tangentFunc();
				break;

			case '4':
				logarithmFunc();
				break;

			case '5':
				BaseLogFunc();
				break;

			case '6':
				powerFunc();
				break;

			case '7':
				squareFunc();
				break;

			case '8':
				SqRootFunc();
				break;

			case '9':
				nth_RootFunc();
				break;

			case 'h':
			case 'H':
				help();
				break;

			case 'e':
			case 'E':
				cout<<"\n***********************\n";
				cout<<"* EXITING THE PROGRAM *\n";
				cout<<"***********************\n";
				flag = false;
				break;
		}
	}

	return 0;
}