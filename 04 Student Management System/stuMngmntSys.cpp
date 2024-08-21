#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
using namespace std;

class UAF {
	private:
		int studNo; // Total Number of students to enter data.
		int index; // index acts like a counter.
		int* RegNo; // Registration Number of student. It is specific for each student.
		string* StudentName; // Student Name
		string* StuFatherName; // Student Father Name
		string Degree; // Degree of Class

	public:
		// Constructor which will initialize whenever an Object is created.
		UAF() {
			cout<<"____________________________________"<<endl;
			cout<<"|   WELCOME TO MANAGEMENT SYSTEM   |"<<endl;
			cout<<"____________________________________"<<endl;

			studNo = 0;
			index = 0;
			RegNo = nullptr;
			StudentName= nullptr;
			StuFatherName= nullptr;
		}
		// Destructor
		~UAF() {
			delete[] RegNo;
			delete[] StudentName;
			delete[] StuFatherName;
		}

		// No. of Student in a Class
		int studNo1() {
			cout<<"Enter the No. of students you want to add: ";
			cin>>studNo;
			cin.ignore();

			RegNo = new int[studNo];
			StudentName= new string[studNo];
			StuFatherName= new string[studNo];
			return 0;
		}

		// Counter
		int index0() {
			index = 0;
		}

		// Add the Students info.
		void add() {
			studNo1();

			while(true) {
				cout<<"\nEnter Class Degree: ";
				cin>>Degree;
				cin.ignore();

				bool isValid = true;	// Checks whether the value added is a Character or not.
				for(char c : Degree) {
					if(!isalpha(c) && c != ' ') {
						isValid = false;
						break;
					}
				}

				if(isValid) {
					break;
				} else {
					cout<<"Invalid input. Please enter a valid name (letters and spaces only).\n";
					cout<<"_________________________________________"<<endl;
				}
			}


			for(int i=0 ; i<studNo ; i++) {

				while(true) {
					cout<<"Enter the registration No. of Student "<<index+1<<" (Format : xxxx): ";
					cin>>RegNo[index];

					if(cin.fail()) {	// Checks whether the value entered is an integer or not.
						cin.clear();
						cin.ignore();
						cout<<"\nInvalid Input. \nPlease Enter an Integer Value for Registration.\n";
						cout<<"_________________________________________"<<endl;
					}	else {
						cin.ignore();
						break;
					}
				}

				cout<<"Enter the Name of Student "<<index+1<<" : ";
				getline(cin,StudentName[index]);	// Enter Student Name string

				cout<<"Enter the Father's Name of Student "<<index+1<<" : ";
				getline(cin,StuFatherName[index]);	// Enter Student Name string

				cout<<"_________________________________________"<<endl;
				index++;
			}
			system("cls");
			cout<<"\n\n---- ADDED SUCCESSFULLY ----\n";
		}

		// Displays	the STUDENTS INFO.
		void show() {
			system("cls");
			cout<<"\n------ DISPLAYING ------\n";
			cout<<"\nDegree: "<<Degree;
			index0();
			for(int i=0 ; i<studNo ; i++) {
				cout<<"\nSr No. "<<index+1;
				cout<<"\nRegistration No. "<<RegNo[index];
				cout<<"\nStudent Name: "<<StudentName[index];
				cout<<"\nFather's Name: "<<StuFatherName[index];
				index++;
				cout<<endl;
			}
			cout<<"_______________________________"<<endl;
		}

		// Search a specific student using RegNo.
		void search() {
			cout<<"\n------ SEARCH ------\n";
			cout<<"Enter the Registration No. of Student: ";
			int findStu;
			cin>>findStu;
			cin.ignore();

			index0();

			for(int i=0 ; i<studNo ; i++) {
				if(RegNo[index] == findStu) {
					system("cls");
					cout<<"------ RESULT FOUND! ------\n";
					cout<<"\nSr No. "<<index+1;
					cout<<"\nRegistration No. "<<RegNo[index];
					cout<<"\nStudent Name: "<<StudentName[index];
					cout<<"\nFather's Name: "<<StuFatherName[index];
					cout<<endl;

					break;
				} else {
					index++;
				}
			}
		}

		// Update students info.
		void update() {

			system("cls");
			cout<<"------ U P D A T E ------\n";
			int choice;
			cout<<"\nPress '1' - Update Specific Information";
			cout<<"\nPress '2' - Update All Information";
			cout<<"\nEnter Choice: ";
			cin>>choice;

			//Select your desired choice from Option 1 & Option 2.
			if(choice == 1) {
				int choice2;
				cout<<"\nPress '1' - To Update REG No.";
				cout<<"\nPress '2' - To Update STUDENT NAME";
				cout<<"\nPress '3' - To Update FATHER NAME";
				cout<<"\nEnter Choice: ";
				cin>>choice2;

				// Option 1 will further have 3 options.
				if(choice2 == 1) { // Choice 1 will enter UPDATED REGISTRATION NUMBER
					int replaceStu;
					cout<<"Enter the Registration No. of Student: ";
					cin>>replaceStu; // replaceSTU will be the RegNO. of the student i want to find.
					cin.ignore();

					index0(); // starts the index from 0
					for(int i=0 ; i<studNo ; i++) {
						if(RegNo[index] == replaceStu) {
							system("cls");
							cout<<"Now Updating!!!\n";

							int oldRegNo;
							oldRegNo = RegNo[index];
							cout<<"\n----- U P D A T E -----";
							cout<<"\nEnter Updated Registration No: ";
							cin>>RegNo[index];
							cin.ignore();

							system("cls");
							cout<<"\n\nVALUES UPDATED";

							cout<<"\n\nOLD VALUES";
							cout<<"\n\nSR No. "<<index+1;
							cout<<"\nReg. No. "<<oldRegNo;

							cout<<"\n\nUPDATED VALUES";
							cout<<"\n\nSR No. "<<index+1;
							cout<<"\nReg. No. "<<RegNo[index];
							cout<<"\nStudent Name: "<<StudentName[index];
							cout<<"\nFather Name: "<<StuFatherName[index];

							break;
						} else {
							index++;
						}
					}
				}	else if(choice2 == 2) {	// Choice 2 will update STUDENTS NAME
					int replaceStu;
					cout<<"Enter the Registration No. of Student: ";
					cin>>replaceStu;
					cin.ignore();

					index0();
					for(int i=0 ; i<studNo ; i++) {
						if(RegNo[index] == replaceStu) {
							system("cls");
							cout<<"Now Updating!!!\n";

							string oldStudentName;
							oldStudentName = StudentName[index];

							cout<<"\n----- U P D A T E -----";

							cout<<"\nEnter Updated Student Name: ";
							getline(cin,StudentName[index]);

							system("cls");
							cout<<"\n\nVALUES UPDATED";

							cout<<"\n\nOLD VALUES";
							cout<<"\n\nSR No. "<<index+1;
							cout<<"\nStudent Name: "<<oldStudentName;

							cout<<"\n\nUPDATED VALUES";
							cout<<"\n\nSR No. "<<index+1;
							cout<<"\nReg. No. "<<RegNo[index];
							cout<<"\nStudent Name: "<<StudentName[index];
							cout<<"\nFather Name: "<<StuFatherName[index];

							break;
						} else {
							index++;
						}
					}
				}	else if(choice2 == 3) {
					int replaceStu;
					cout<<"Enter the Registration No. of Student: ";
					cin>>replaceStu;
					cin.ignore();

					index0();
					for(int i=0 ; i<studNo ; i++) {
						if(RegNo[index] == replaceStu) {
							system("cls");
							cout<<"Now Updating!!!\n";

							string oldStuFatherName;
							oldStuFatherName = StuFatherName[index];

							cout<<"\n----- U P D A T E -----";

							cout<<"\nEnter Updated Father Name: ";
							getline(cin,StuFatherName[index]);

							system("cls");
							cout<<"\n\nVALUES UPDATED";

							cout<<"\n\nOLD VALUES";
							cout<<"\n\nSR No. "<<index+1;
							cout<<"\nFather Name: "<<oldStuFatherName;

							cout<<"\n\nUPDATED VALUES";
							cout<<"\n\nSR No. "<<index+1;
							cout<<"\nReg. No. "<<RegNo[index];
							cout<<"\nStudent Name: "<<StudentName[index];
							cout<<"\nFather Name: "<<StuFatherName[index];

							break;
						} else {
							index++;
						}
					}
				}
			} else if(choice == 2) {
				int replaceStu;
				cout<<"Enter the Registration No. of Student: ";
				cin>>replaceStu;
				cin.ignore();

				index0();
				for(int i=0 ; i<studNo ; i++) {
					if(RegNo[index] == replaceStu) {
						system("cls");
						cout<<"Now Updating!!!\n";

						int oldRegNo;
						string oldStudentName;
						string oldStuFatherName;

						oldRegNo = RegNo[index];
						oldStudentName = StudentName[index];
						oldStuFatherName = StuFatherName[index];

						cout<<"\n----- U P D A T E -----";
						cout<<"\nEnter Updated Registration No: ";
						cin>>RegNo[index];
						cin.ignore();

						cout<<"\nEnter Updated Student Name: ";
						getline(cin,StudentName[index]);

						cout<<"\nEnter Updated Father Name: ";
						getline(cin,StuFatherName[index]);

						system("cls");
						cout<<"\n\nVALUES UPDATED";

						cout<<"\n\nOLD VALUES";
						cout<<"\n\nSR No. "<<index+1;
						cout<<"\nReg. No. "<<oldRegNo;
						cout<<"\nStudent Name: "<<oldStudentName;
						cout<<"\nFather Name: "<<oldStuFatherName;

						cout<<"\n\nUPDATED VALUES";
						cout<<"\n\nSR No. "<<index+1;
						cout<<"\nReg. No. "<<RegNo[index];
						cout<<"\nStudent Name: "<<StudentName[index];
						cout<<"\nFather Name: "<<StuFatherName[index];

						break;
					} else {
						index++;
					}
				}
			} else {
				cout<<"\nInvalid Input";
			}
		};

		void help() {
			system("cls");
			cout<<"\nOPTION AVAILABLE\n";
			cout<<"\n1. Add()";
			cout<<"\n2. Show()";
			cout<<"\n3. Search()";
			cout<<"\n4. Update()";
			cout<<"\n5. Delete()";
			cout<<"\n6. Exit()";
		}

		void end() {
			exit(0);
		}

};
int main() {

	UAF CS;

	char chkp;
	bool chk = true;

	while(chk) {
		cout<<"\nPress 'h/H' for Help!\n";
		cout<<"\nSelect a Valid Option: ";
		cin>>chkp;

		switch(chkp) {
			case '1':
				CS.add();
				break;

			case '2':
				CS.show();
				break;

			case '3':
				CS.search();
				break;

			case '4':
				CS.update();
				break;

			case '5':
//				CS.delete();

			case '6':
				CS.end();

			case 'h':
			case 'H':
				CS.help();
				break;

			default:
				cout<<"\nInvalid Choice\n";
		};
	};

	return 0;
}

