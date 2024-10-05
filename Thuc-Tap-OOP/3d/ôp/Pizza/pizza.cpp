//	Name: Duong Quang Minh
//	Class:	Bao dam an toan thong tin

#include<iostream>
#include <string>
using namespace std;

class Pizza{
	private:
		string topping;
		int diameter;
		double price;
		const static string STDTOP;
		const static int STDSIZE;
		const static double STDPRICE;
	public:
		Pizza(const string = STDTOP,const int = STDSIZE,const double = STDPRICE);
		void setValue();
		void displayValue();
};

const string Pizza::STDTOP="cheese";
const int Pizza::STDSIZE=12;
const double Pizza::STDPRICE=8.99;

Pizza::Pizza(const string top,const int size,const double price){
	topping = top;
	diameter=size;
	this->price=price;
}
void Pizza::displayValue(){
	cout << "A "<<diameter << " inch "<<topping<<" pizza. Price $"<<price<<endl;
}
void Pizza::setValue(){
	const double TOPPINGPREMIUM=1.00;
	const double SIZEPREMIUM=1.50;
	cout<<"Enter topping ";
	cin >> topping;
	if(topping !=STDTOP)
		price = STDPRICE + TOPPINGPREMIUM;
	cout <<"Enter size ";
	cin >>diameter;
	if(diameter > STDSIZE)
		price += SIZEPREMIUM;
}
int main(){
	Pizza stdPizza;
	Pizza special("pineapple");
	Pizza deluxeSpecial("Sausage",16);
	Pizza veryDeluxeSpecial("lobster,20,17.99");
		cout <<"The standard pizza is: ";
		stdPizza.displayValue();
		cout<<"Today's special is ";
		special.displayValue();
		cout<"Thee deluxe special is ";
		deluxeSpecial.displayValue();
		cout<<"And the very deluxe special is ";
		veryDeluxeSpecial.displayValue();		
}
