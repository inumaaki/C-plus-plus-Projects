#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

class UAF {
	private:
		int studNo;
		int index;
		int* RegNo;
		string* StudentName;
		string* StuFatherName;
		string Degree;

	public:
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

		~UAF() {
			delete[] RegNo;
			delete[] StudentName;
			delete[] StuFatherName;
		}

		int studNo1() {
			cout<<"Enter the No. of students you want to add: ";
			cin>>studNo;
			cin.ignore();

			RegNo = new int[studNo];
			StudentName= new string[studNo];
			StuFatherName= new string[studNo];
		}

		int index0() {
			index = 0;
		}

		void add() {
			studNo1();

			cout<<"\nEnter Class Degree: ";
			cin>>Degree;
			cin.ignore();

			for(int i=0 ; i<studNo ; i++) {
				cout<<"Enter the registration No. of Student (Format : xxxx) "<<index+1<<" : ";
				cin>>RegNo[index];
				cin.ignore();

				cout<<"Enter the Name of Student "<<index+1<<" : ";
				getline(cin,StudentName[index]);

				cout<<"Enter the Father's Name of Student "<<index+1<<" : ";
				getline(cin,StuFatherName[index]);

				cout<<"_________________________________________"<<endl;
				system("cls");
				index++;
			}
		}

		void show() {
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
		}

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
				} else {
					index++;
					continue;
				}
			}
		}
};

int main() {

	UAF CS;
	CS.add();
	CS.show();
	CS.search();

	return 0;
}

