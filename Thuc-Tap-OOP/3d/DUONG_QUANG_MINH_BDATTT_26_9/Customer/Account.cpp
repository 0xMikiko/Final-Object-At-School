#pragma once
#include <iostream>

using namespace std;

class Account{
	protected:
		double balance;      
	public:
		Account(double=0);
		double getBalance();
		bool deposit(double);  
		bool withdraw(double);
		void print();	
};

Account::Account(double bal){
	balance=bal;
}
double Account::getBalance(){
	return balance;
}
bool Account::deposit(double amt){
	cout <<"Tai khoan nap them $" << amt<<endl;
	balance+=amt;
	return true;
}
bool Account::withdraw(double amt){
	balance-=amt;
	return true;
}
void Account::print(){
	cout << "Money in bank account: $"<<balance<<endl;
}
