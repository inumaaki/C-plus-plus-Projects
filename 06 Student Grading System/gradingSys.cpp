#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

class classCS {
	private:
		int* RegNo;
		string* studentName;
		int* Marks;

		int studNo;
		int index;

	public:
		classCS() {
			cout << "____________________________________" << endl;
			cout << "|   WELCOME TO MANAGEMENT SYSTEM   |" << endl;
			cout << "____________________________________" << endl;

			studNo = 0;
			index = 0;
			RegNo = nullptr;
			studentName = nullptr;
			Marks = nullptr;
		}

		~classCS() {
			delete[] RegNo;
			delete[] studentName;
			delete[] Marks;
		}

		void studNum() {
			cout << "Enter the number of students you want to add: ";
			cin >> studNo;
			cin.ignore();

			RegNo = new int[studNo];
			studentName = new string[studNo];
			Marks = new int[studNo];
		}

		void clearScreen() {
			system("cls");
		}

		void setValues() {
			studNum();

			for (int i = 0; i < studNo; i++) {
				cout << "Enter Registration Number of Student No. " << i + 1 << " (Format: XXXX): ";
				cin >> RegNo[i];

				cout << "Enter Name of Student " << i + 1 << ": ";
				cin.ignore();
				getline(cin, studentName[i]);

				cout << "Enter Marks of Student " << i + 1 << ": ";
				cin >> Marks[i];

				cout << endl;
			}

			clearScreen();
			cout << "-- Added Successfully --" << endl;
		}

		void calculateGrades() {
			cout << "-- C A L C U L A T I N G -- \n\n";
			int RegNum;
			cout << "Enter Registration No. of Student: ";
			cin >> RegNum;

			bool found = false;
			for (int i = 0; i < studNo; i++) {
				if (RegNo[i] == RegNum) {
					found = true;
					clearScreen();
					cout << "Student Found " << endl;
					cout << "Name: " << studentName[i] << endl;
					cout << "Registration Number: " << RegNo[i] << endl;
					cout << "Marks: " << Marks[i] << endl;

					char grade;
					if (Marks[i] >= 90) {
						grade = 'A';
					} else if (Marks[i] >= 75) {
						grade = 'B';
					} else if (Marks[i] >= 60) {
						grade = 'C';
					} else if (Marks[i] >= 45) {
						grade = 'D';
					} else {
						grade = 'F';
					}

					cout << "Grade: " << grade << endl;
					break;
				}
			}

			if (!found) {
				cout << "Student with Registration Number " << RegNum << " not found." << endl;
			}
		}

		void pause() {
			system("pause");
		}
};

int main() {
	classCS evil;
	char chkC;
	bool chk = true;

	while(chk) {
		cout << "\nSelect a Valid Option:\n";
		cout << "1. Set Information of Class\n";
		cout << "2. Calculate Grades\n";
		cout << "3. Exit\n\n";
		cout<<"Enter your choice: ";
		cin >> chkC;
		evil.clearScreen();

		switch(chkC) {
			case '1':
				cout<<"-- ENTERING INFO. -- \n\n";
				evil.setValues();
				evil.pause();
				evil.clearScreen();
				break;

			case '2':
				cout<<"-- CHECKING --\n\n";
				evil.calculateGrades();
				evil.pause();
				evil.clearScreen();
				break;

			case '3':
				chk = false;
				cout << "Exiting the program.\n";
				break;

			default:
				cout << "\nInvalid Choice\n";

		}
	}
	return 0;
}
