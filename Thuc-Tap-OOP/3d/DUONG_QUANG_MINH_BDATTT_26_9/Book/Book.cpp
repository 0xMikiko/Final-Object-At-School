#include <iostream>
#include<math.h>
using namespace std;
class Book{
	protected:
		string title;
		string author;
	public:
		Book(string,string);
		string getTitle();
		void setTitle(string);
		string getAuthor();
		void setAuthor(string);
		void display();
};
Book::Book(string T, string A){
	title = T;
	author = A;
}
void Book::setTitle(string T){
	title=T;
}
string Book::getTitle(){
	return title;
}

void Book::setAuthor(string A){
	author=A;
}
string Book::getAuthor(){
	return author;
}
void Book::display(){
	cout << "Tac gia cua cua sach "<<"'" << title <<"'" << " la " << author <<endl;
}
//-----------Fiction----------
class Fiction:public Book{
	private:
		int numReadLev;
	public:
		int getNum();
		void setNum1(int);
		Fiction(string,string,int);
		void displayNumRead();
};
Fiction::Fiction(string T,string A,int num):Book(T,A){
	numReadLev=num;
}
void Fiction::setNum1(int numRead){
	numReadLev= numRead;
}
int Fiction::getNum(){
	return numReadLev;
}
void Fiction::displayNumRead(){
	Book::display();
	cout <<"Cuon sach nay danh cho tre " <<numReadLev<< " tuoi"<<endl;
}
//---------NonFiction--------
class NonFiction:public Book{
	private:
		int numofPage;
	public:
		int getNum1();
		void setNum1(int);
		NonFiction(string,string,int);
		void displayNumPage();
};
NonFiction::NonFiction(string T,string A,int num):Book(T,A){
	numofPage=num;
}
void NonFiction::setNum1(int numPage){
	numofPage= numPage;
}
int NonFiction::getNum1(){
	return numofPage;
}
void NonFiction::displayNumPage(){
	Book::display();
	cout <<"Cuon sach co " <<numofPage<< " trang"<<endl;
}


int main(){
	Book book("Toi tai gioi","Adam");
	book.display();
	Fiction Fbook("Killer Bean","Joshen Keany",18);
	Fbook.displayNumRead();
	NonFiction NFbook("Harry Potter","J.K Rolwing",2468);
	NFbook.displayNumPage();
}
