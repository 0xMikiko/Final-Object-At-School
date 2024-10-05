#include <iostream>
using namespace std;
class Inventory{
	friend ostream& operator<<(ostream&,const Inventory&);
	private:
		int stockNum;
		int numSold;
	public:
		Inventory(int,int);
		Inventory& operator++();
		Inventory& operator--();

};
Inventory::Inventory(int stknum, int sold){
	stockNum=stknum;
	numSold =sold;
}
ostream& operator<<(ostream& out,const Inventory& item){
	out <<"Item #" << item.stockNum << " Quantity" <<item.numSold << endl;
	return out;
}
Inventory& Inventory::operator++(){
	++numSold;
	return *this;
}
Inventory& Inventory::operator--(){
	--numSold;
	return *this;
}
int main(){
	Inventory anItem(101,475);
	cout << anItem;
	++anItem;
	cout << anItem;
	++anItem;
	cout << anItem;
	--anItem;
	cout << anItem;
	--anItem;
	cout << anItem;		
}
