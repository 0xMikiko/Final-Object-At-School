//	Name: Duong Quang Minh
//	Class:	Bao dam an toan thong tin

#include<iostream>
#include<string>
using namespace std;
#include "Date.h"
#include "Person.h"
#include "Time.h"
#include "MagazineSubscription.h"
#include "DentalAppointment.h"
void Input_Mega_Sub();
void Input_Dental_App(); 
void Out();

int main(){
	Out();
	int choice;
	cin >> choice;
	while(choice==1 || choice ==2){	
		switch(choice){
			case 1:
				Input_Mega_Sub();
				break;
			case 2:
				Input_Dental_App();
				break;			
		}
	}
	cout << "End this project";
	return 0;
}
void Input_Mega_Sub() {
    string FN, LN, ZC;
    fflush(stdin);
    cout << "Your first name: "; 
    getline(cin,FN);
    cout << "Your last name: ";
    getline(cin,LN);
    cout << "Zipcode: ";
    getline(cin,ZC); 
	
	int subDay, subMonth, subYear, expDay, expMonth, expYear;
    cout << "Day subscription start: ";
    cin >> subDay;
    cout << "Month subscription start: ";
    cin >> subMonth;
    cout << "Year subscription start: ";
    cin >> subYear;
    cout << "Day expirates: ";
    cin >> expDay;
    cout << "Day expirates: ";
    cin >> expMonth;
    cout << "Day expirates: ";
    cin >> expYear;
    cout << "------------------------------------";
    MagazineSubscription Info(FN,LN,ZC,subDay,subMonth,subYear,expDay,expMonth,expYear);
    Info.displayMagazineSubscription();
 
}

void Input_Dental_App() {
    string FN,LN,ZC;
    fflush(stdin);
    cout << "First patient name: ";
    getline(cin,FN);
    cout << "Last name patient: ";
    getline(cin,LN);
    cout << "Zip code by patient: ";
    getline(cin,ZC);
	
	int Day, Month, Year, Hour, Minute, Duration;
    cout << "Day date: ";
    cin >> Day;
    cout << "Month date: ";
    cin >> Month;
    cout << "Year date: ";
    cin >> Year;
    cout << "Hours: ";
    cin >> Hour;
    cout << "Minutes: ";
    cin >> Minute;
    cout << "Duration: ";
    cin >> Duration;
	cout << "--------------------------------------";
    DentalAppointment Info(FN,LN,ZC,Day,Month,Year,Hour,Minute,Duration);
    Info.displayAppointment();
 
}

void Out(){
	cout << "Press 1 for enter Magazine Subscription" << endl;
	cout << "Press 2 for enter Dental Appointment" << endl;
	cout << "Press any key to quit" << endl;
}

