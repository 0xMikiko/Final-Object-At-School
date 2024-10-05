//	Name: Duong Quang Minh
//	Class:	Bao dam an toan thong tin

#include <iostream>
using namespace std;
#include <string>
#include "Name.h"
#include "CreditData.h"
#include "Customer.h"

int main () {
    int x;
    const int TIMES = 2;
    string first, middle, last, phone;
    double balance, limit;
    for(x = 0;x<TIMES;x++){
        cout<<endl<<"Please enter first name for customer #"<<(x+1)
        <<" ";
        cin >>first;
        cout <<"Please enter middle name: ";
        cin >> middle;
        cout <<"Please enter last name: ";
        cin >> last;
        cout <<"Please enter current balance: ";
        cin >> balance;
        cout <<"Please enter credit limit: ";
        cin >> limit;
        cout <<"Please enter phone number: ";
        cin >> phone;
        Customer NewCustomer(first, middle, last, balance, limit, phone);
        NewCustomer.showCustomer();
    }
    return 0;
}
