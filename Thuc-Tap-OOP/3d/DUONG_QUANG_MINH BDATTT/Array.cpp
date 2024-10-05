#include<iostream>
using namespace std;
class Array{
	friend ostream& operator<<(ostream&, const Array&);
	friend istream& operator>>(istream&, Array&);
	private:
		int size;
		int *ptr;
	public:	
		Array();
		Array(Array &);
		~Array();
		Array& operator=(Array&);
		bool operator==(Array& array);
		bool operator!=(Array& array);
		Array& operator[](int);
		int getSize();
};
Array::Array(){
	this->size=0;
	ptr = new int[size];
}

Array::Array(Array &arr){
	size=arr.size;
	ptr=new int[size];
	for(int i=0; i<size ;i++){
		ptr[i]=arr.ptr[i];
	}
}

Array::~Array(){
	delete [] ptr;
}
// 		Overload =
Array& Array::operator=(Array &arr){
	size=arr.size;
	delete [] ptr;
	ptr=new int[size];
	for(int i=0;i<size;i++){
		ptr[i]=arr.ptr[i];
	}
	return *this;
}

int Array::getSize(){
	return size;
}
// 		Overload ==
bool Array::operator==( Array& arr){
	if(size != arr.size )	return false;
	for(int i=0; i<size;i++){
		if(ptr[i]!=arr.ptr[i])
			return false;
	}
	return true;
}
// 		Overload !=
bool Array::operator!=(Array& arr){
	if(size == arr.size )	return false;
	for(int i=0; i<size;i++){
		if(ptr[i]==arr.ptr[i])
			return false;
	}
	return true;
}

// 	    Overload []
Array& Array::operator[](int Asize){
	int *temp;
	int i;
	if(Asize>size)
	{
		temp=new int[Asize];
		for(i=0;i<size;i++){
			temp[i]=ptr[i];
		}
		for(i=size;i<Asize;i++){
			cout<<"Enter the element #"<<i+1<<" ";
			cin>>temp[i];
		}
	delete ptr;
	ptr=new int[Asize];
	for(i=0;i<Asize;i++){
		ptr[i]=temp[i];
		}
	delete temp;	
	}
	size=Asize;
	return *this;
}
//  		OutPut
ostream& operator<<(ostream& out,const Array& arr){
	out<< "----------" << endl;;
	out<<"Size of this Array: "<<arr.size<<endl;

	for(int i=0;i<arr.size;i++){
		out<<arr.ptr[i]<<" ";
	}
	out<< endl;	
	return out;
}
//			Input
istream& operator>>(istream& in,Array& arr){
	int i;
	cout<< endl;;
	cout<<"Enter size of Array ";
	in>>arr.size;
	arr.ptr=new int[arr.size];
	
	cout<<"Enter element of this Array"<<endl;
	for(i=0;i<arr.size;i++){
		cout<<"Enter element #"<<i+1<<" ";	
		in>>arr.ptr[i];
		}
}

//			Check
void Check(Array A,Array B){
	if(A==B)
		cout <<" \narray A == array B \n";
	else
		cout << "\narray A != array B \n";
	
}
int main(){
	Array A;
	cin >> A;
	Array B(A);
	cout << A << B;
	Check(A,B);
	
	A[10];
	cout << A << B;
	Check(A,B);
			
	
}
