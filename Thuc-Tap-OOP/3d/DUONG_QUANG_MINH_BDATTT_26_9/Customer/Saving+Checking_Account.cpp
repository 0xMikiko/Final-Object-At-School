
#include "Account.cpp"
class SavingAccount:public Account{
	private:
		double interestRate;
	public:
		double getInterestRate();
		SavingAccount(double,double);
};
SavingAccount::SavingAccount(double bal,double interRate):Account(bal){
	interestRate=interRate;
}
double SavingAccount::getInterestRate(){
	return interestRate;
}

class CheckingAccount:public Account{
	private:
		double overdraftProtection;
	public:
		double getOverdraftProtection();
		CheckingAccount(double);
		CheckingAccount(double,double);
		bool withdraw(double);
		void print();
};
CheckingAccount::CheckingAccount(double bal):Account(bal){
}
CheckingAccount::CheckingAccount(double bal,double overPro):Account(bal){
	overdraftProtection=overPro;
}
double CheckingAccount::getOverdraftProtection(){
	return overdraftProtection;
}
bool CheckingAccount::withdraw(double amt){
	cout <<"Tai khoan dang rut "<<amt<<endl;
	if(balance>=amt || (amt - balance<= overdraftProtection )){
		cout << "Giao dich thanh cong!!  ";
		balance=balance - amt;
		Account::print();
		return true;
	}else{
		cout << "Giao dich khong thanh cong!!  ";
		Account::print();
		return false;
	}
}
void CheckingAccount::print(){
	Account::print();
	cout << "Overdraft Protection: $"<<overdraftProtection<<endl;
	cout << endl;
}
