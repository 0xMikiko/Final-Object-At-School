#include<iostream>
using namespace std;
class Employee
{
	private:
		int idNum;
		double salary;
	public:
		Employee(int, double);
		double operator+(Employee);
		double operator-(Employee);

};
Employee::Employee(int id, double sal){
idNum = id;
salary = sal;
}

double Employee::operator+(Employee emp){
	double total;
	total = salary + emp.salary;
	return total;
}
double Employee::operator-(Employee emp){
	double sub;
	sub = salary- emp.salary;
	return sub;
}

int main(){
	Employee clerk(1234, 400.00);
	Employee driver(3456, 650.00);
	double sum;
	double sub;
	sum = clerk.operator+(driver);
	cout << "Using operator+() function - Sum is $" <<
	sum << endl;
	sum = clerk + driver;
	cout << "Adding clerk to driver - Sum is $" <<
	sum << endl;
	
	sub = clerk.operator-(driver);
	cout << "Using operator-() function - Sub is $" <<
	sub << endl;
	sub = clerk - driver;
	cout << "Subing clerk to driver - Sub is $" <<
	sub << endl;
	return 0;
}

