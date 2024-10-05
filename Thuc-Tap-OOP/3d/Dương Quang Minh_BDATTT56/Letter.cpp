//	Name: Duong Quang Minh
//	Class:	Bao dam an toan thong tin
//	FileID:	Letter


#include <iostream>
#include<windows.h>
using namespace std;

class Letter
{
  	private:
   		string title;
   		string recipient;
   		static int count;
  	public:
   		void setRecipient(string, string);
   		void displayGreeting();
   		static void displayCount();
};
int Letter::count=0;

void Letter::setRecipient(string Title,string Recip)
{
	title=Title;
	recipient=Recip;
}
void Letter::displayGreeting()
{
	Letter z;
	string title,recipient;
	cout<<"Enter title for recipient, for example 'Mr' or 'Ms' >>";
	getline(cin,title);
	cout<<"Enter last name of recipient >>";
	getline(cin,recipient);
	z.setRecipient(title,recipient);
	cout<<"Dear "<<z.title<<". "<<z.recipient<<endl;
	cout<<"Thank you"<<endl;

}
void Letter::displayCount()
{
	count++;
	cout<<"Current count is "<<count<<endl;
}
void Run(){
	char c ;
	do{
		Letter z;
		z.displayGreeting();
		z.displayCount();
		cout<<"Do you want send - y or n";
		cin>>c;
	}while(c=='y');
}
int main(){
	Run();
	return 0;
	
}
