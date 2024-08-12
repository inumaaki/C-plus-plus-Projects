#include<iostream>
#include<stdlib.h>
#include<string>
#include<iomanip>
using namespace std;

struct agency {
	int num;
	string Destination;
	string dateFrom;
	string dateTo;
	int Price;
};

void displayAgency(agency pkg) {
	cout<<"PKG No. "<<pkg.num<<endl;
	cout<<"Destination: "<<pkg.Destination<<endl;
	cout<<"Starting From: "<<pkg.dateFrom<<endl;
	cout<<"Ending On: "<<pkg.dateTo<<endl;
	cout<<"Price: "<<pkg.Price<<endl;
}

void places(agency places) {
	cout<<places.num<<". ";
	cout<<places.Destination<<endl;
}

int main() {
	agency plan1{1, "Kallar Kahar", "06-Aug-24", "10-Aug-24", 7000};
	agency plan2{2, "Murree", "10-Aug-24", "15-Aug-24", 10000};
	agency plan3{3, "Naran Kaghan", "15-Aug-24", "20-Aug-24", 20000};
	agency plan4{4, "Swat", "20-Aug-24", "25-Aug-24", 30000};
	agency plan5{5, "Upper Dir", "25-Aug-24", "30-Aug-24", 40000};
	agency plan6{6, "Azad Kashmir", "30-Aug-24", "05-Sep-24", 50000};
	agency plan7{7, "Gilgit Baltistan", "05-Aug-24", "10-Sep-24", 60000};

	char choice;
	char move;
	bool flag = true;

	while(flag) {
		cout<<"PRESS 'h/H' for Help!\n";
		cout<<"PRESS 'x/X' for Clear Screen\n";
		cout<<"PRESS 'e/E' to Exit\n";
		cout<<"PRESS 0 to Go Back\n";
		cout<<"Enter your choice: ";
		cin>>choice;


		switch(choice) {
			// Display package 1
			case '1':
				system("cls");
				displayAgency(plan1);

				// Go back in Program
				cout << "\n\nWant to go back? Press 'b/B': \n";
				cout << "Want to see next pkg? Press 'n/N': \n";
				cout << "Enter ('b/B' or 'n/N') : ";
				cin >> move;

				while (move != 'b' && move != 'B' && move != 'N' && move != 'n') {
					cout << "WRONG INPUT!\n";
					cout << "\n\nWant to go back? Press 'b/B': \n";
					cout << "Want to see next pkg? Press 'n/N': \n";
					cout << "Enter ('b/B' or 'n/N') : ";
					cin >> move;
				}

				if (move == 'b' || move == 'B') {
					continue; // Return to the main menu
				}

				// Move to next pkg
				if (move == 'n' && move == 'N') {
					choice = '2';
					break;
				}

			// Display package 2
			case '2':
				system("cls");
				displayAgency(plan2);

				// Go back in Program
				cout << "\n\nWant to go back? Press 'b/B': \n";
				cout << "Want to see PREVIOUS pkg? Press 'p/P': \n";
				cout << "Want to see NEXT pkg? Press 'n/N': \n";
				cout << "Enter ('b/B' or 'p/P' or 'n/N') : ";
				cin >> move;

				while (move != 'b' && move != 'B' && move != 'N' && move != 'n' && move != 'p' && move != 'P') {
					cout << "WRONG INPUT!\n";
					cout << "\n\nWant to go back? Press 'b/B': \n";
					cout << "Want to see PREVIOUS pkg? Press 'p/P': \n";
					cout << "Want to see NEXT pkg? Press 'n/N': \n";
					cout << "Enter ('b/B' or 'p/P' or 'n/N') : ";
					cin >> move;
				}

				// Move to Main Menu
				if (move == 'b' || move == 'B') {
					continue; // Return to the main menu
				}

//				// Move to PREVIOUS pkg
//				else if (move == 'p' && move == 'P') {
//					choice = '1'; // Go back to the previous package
//					continue;
//				}

				// Move to next pkg
				else if (move == 'n' && move == 'N') {
					choice = '3';
					break;
				}

			// Display package 3
			case '3':
				system("cls");
				displayAgency(plan3);

				// Go back in Program
				cout<<"\n\nWant to go back? Press 'b/B': \n";
				cout<<"Want to see next pkg? Press 'n/N': \n";
				cout<<"Enter ('b/B' / 'n/N') : ";
				cin>>move;

				while(move != 'b' && move !='B' && move != 'N' && move !='n') {
					cout<<"WRONG INPUT!\n";
					cout<<"\n\nWant to go back? Press 'b/B': \n";
					cout<<"Want to see next pkg? Press 'n/N': \n";
					cout<<"Enter ('b/B' / 'n/N') : ";
					cin>>move;
				}

				// Move to Main Menu
				if (move == 'b' || move == 'B') {
					continue; // Return to the main menu
				}

				// Move to next pkg
				else if(move == 'n' && move == 'N') {
					choice == '4';
					break;
				}

			// Display package 4
			case '4':
				system("cls");
				displayAgency(plan4);

				// Go back in Program
				cout<<"\n\nWant to go back? Press 'b/B': \n";
				cout<<"Want to see next pkg? Press 'n/N': \n";
				cout<<"Enter ('b/B' / 'n/N') : ";
				cin>>move;

				while(move != 'b' && move !='B' && move != 'N' && move !='n') {
					cout<<"WRONG INPUT!\n";
					cout<<"\n\nWant to go back? Press 'b/B': \n";
					cout<<"Want to see next pkg? Press 'n/N': \n";
					cout<<"Enter ('b/B' / 'n/N') : ";
					cin>>move;
				}

				// Move to Main Menu
				if (move == 'b' || move == 'B') {
					continue; // Return to the main menu
				}

				// Move to next pkg
				else if(move == 'n' && move == 'N') {
					choice == '5';
					break;
				}

			// Display package 5
			case '5':
				system("cls");
				displayAgency(plan5);

				// Go back in Program
				cout<<"\n\nWant to go back? Press 'b/B': \n";
				cout<<"Want to see next pkg? Press 'n/N': \n";
				cout<<"Enter ('b/B' / 'n/N') : ";
				cin>>move;

				while(move != 'b' && move !='B' && move != 'N' && move !='n') {
					cout<<"WRONG INPUT!\n";
					cout<<"\n\nWant to go back? Press 'b/B': \n";
					cout<<"Want to see next pkg? Press 'n/N': \n";
					cout<<"Enter ('b/B' / 'n/N') : ";
					cin>>move;
				}

				// Move to Main Menu
				if (move == 'b' || move == 'B') {
					continue; // Return to the main menu
				}

				// Move to next pkg
				else if(move == 'n' && move == 'N') {
					choice == '6';
					break;
				}

			// Display package 6
			case '6':
				system("cls");
				displayAgency(plan6);

				// Go back in Program
				cout<<"\n\nWant to go back? Press 'b/B': \n";
				cout<<"Want to see next pkg? Press 'n/N': \n";
				cout<<"Enter ('b/B' / 'n/N') : ";
				cin>>move;

				while(move != 'b' && move !='B' && move != 'N' && move !='n') {
					cout<<"WRONG INPUT!\n";
					cout<<"\n\nWant to go back? Press 'b/B': \n";
					cout<<"Want to see next pkg? Press 'n/N': \n";
					cout<<"Enter ('b/B' / 'n/N') : ";
					cin>>move;
				}

				// Move to Main Menu
				if (move == 'b' || move == 'B') {
					continue; // Return to the main menu
				}

				// Move to next pkg
				else if(move == 'n' && move == 'N') {
					choice == '7';
					break;
				}

			// Display package 7
			case '7':
				system("cls");
				displayAgency(plan7);

				cout<<"\n\nWant to go back? Press '0': ";
				cin>>move;

				while(move !='0') {
					cout<<"WRONG INPUT!\n";
					cout<<"\n\nWant to go back? Press '0': ";
					cin>>move;
				}
				if(move == '0') {
					break;
				}

			// Lists all the available packages.
			case 'h':
			case 'H':
				system("cls");
				cout<<"We've following available options: \n";
				places(plan1);
				places(plan2);
				places(plan3);
				places(plan4);
				places(plan5);
				places(plan6);
				places(plan7);

				cout<<"\n\nWant to go back? Press '0': ";
				cin>>move;
				if(move == '0') {
					break;
				} else {
					cout<<"WRONG INPUT!\n";
				}
				break;

			// Clears the screen
			case 'x':
			case 'X':
				system("cls");
				break;

			// Exits the program
			case 'e':
			case 'E':
				cout<<"\nEXITING THE PROGRAM!\n";
				flag = false;
				break;

			default:
				cout<<"\nCOMMAND NOT FOUND!\n\n"; // If wrong key will be pressed then it'll will return an error.
				break;
		}
	}
}
