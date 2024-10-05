#include "Customer.cpp"
#include "Saving+Checking_Account.cpp"
int main(){
	CheckingAccount Acc1(1000,30);
	Customer P1("Quang","Minh");
	P1.print();
	Acc1.print();
	
	CheckingAccount Acc2(2000,50);
	Customer P2("William","Kenny");
	P2.print();
	Acc2.print();
	//----Acc1 rut tien-----
	P1.print();
	Acc1.withdraw(250);
	cout << endl;
	//----Acc2 nap tien-----
	P2.print();
	Acc2.deposit(500);
	Acc2.print();
	//----Acc2 rut tien qua muc overdraft-----
	P2.print();
	Acc2.withdraw(3000);
	//----Acc2 rut tien phu hop voi overdraft-----
	Acc2.withdraw(2530);
}
