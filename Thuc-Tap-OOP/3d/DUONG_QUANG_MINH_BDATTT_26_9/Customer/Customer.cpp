#include "Account.cpp"
#include<string.h>
#include "Account.cpp"
#include "Account.cpp"
using namespace std;
class Customer{
	protected:
		string firstName;
		string lastName;
		Account account;
	public:
		Customer(string,string);
		string getFirstName();
		string getLastName();
		Account getAccount();
		void setFirstName(string);
		void setLastName(string);
		void setAccount(Account);
		void print();
};
Customer::Customer(string FN,string LN){
	firstName=FN;
	lastName=LN;
}
string Customer::getFirstName(){
	return firstName;
}
string Customer::getLastName(){
	return lastName;
}
void Customer::setFirstName(string FN){
	firstName=FN;
}
void Customer::setLastName(string LN){
	lastName=LN;
}
void Customer::setAccount(Account acc){
	account=acc;
}
void Customer::print(){
	cout << "Account owner: "<<firstName <<" "<<lastName<<endl;
	
}
