#include<iostream>
#include<stdlib.h>
#include<string>
#include<iomanip>
using namespace std;


struct agency{
	string Destination;
	string dateFrom;
	string dateTo;
	int Price;
};

void displayAgency(agency pkg){
	cout<<"Destination: "<<pkg.Destination<<endl;
	cout<<"Starting From: "<<pkg.dateFrom<<endl;
	cout<<"Ending On: "<<pkg.dateTo<<endl;
	cout<<"Price: "<<pkg.Price<<endl;
}

int main(){
	agency plan1{"Kallar Kahar" , "06-Aug-24" , "10-Aug-24" , 7000};
	agency plan2{"Murree" , "10-Aug-24" , "15-Aug-24" , 10000};
	agency plan3{"Naran Kaghan" , "15-Aug-24" , "20-Aug-24" , 20000};
	agency plan4{"Swat" , "20-Aug-24" , "25-Aug-24" , 30000};
	agency plan5{"Upper Dir" , "25-Aug-24" , "30-Aug-24" , 40000};
	agency plan6{"Azad Kashmir" , "30-Aug-24" , "05-Sep-24" , 50000};
	agency plan7{"Gilgit Baltistan" , "05-Aug-24" , "10-Sep-24" , 60000};
	
	displayAgency(plan1);
}
