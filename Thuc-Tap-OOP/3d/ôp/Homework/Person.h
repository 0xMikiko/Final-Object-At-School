
class Person{
	private: 
		string firstName;
		string lastName;
		string zipCode;
	public:
		Person(string = "x", string = "x", string = "x");
		void displayPerson();
};
Person::Person(string FN,string LN,string ZC){
	firstName=FN;
	lastName=LN;
	zipCode=ZC;	
}
void Person::displayPerson(){
	cout << "First Name: " << firstName << endl;
	cout << "Last Name " << lastName << endl;
	cout << "Zipcode: " << zipCode <<endl;
}
