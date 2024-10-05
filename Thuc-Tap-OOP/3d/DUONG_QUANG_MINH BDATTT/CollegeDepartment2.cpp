#include<iostream>
#include<string.h>
using namespace std;

class CollegeDepartment{
	friend ostream& operator<<(ostream&, const CollegeDepartment&);
	friend istream& operator>>(istream&, CollegeDepartment&);
	friend bool operator>(CollegeDepartment,CollegeDepartment);
	friend bool operator<(CollegeDepartment,CollegeDepartment);
	
	
	private:
		string departName;
		string chairName;
		int courseNum;
		string *ptr;
	public:
		CollegeDepartment(string,string,int);
		CollegeDepartment();
		CollegeDepartment& operator=( CollegeDepartment&);
		
};
CollegeDepartment::CollegeDepartment(){
	departName=" ";
    chairName=" ";
    courseNum=0;
    ptr= new string [0];
}

CollegeDepartment::CollegeDepartment(string DName,string CName,int CNum){
	departName = DName;
	chairName = CName;
	courseNum = CNum;
}
// 		Overload >
bool operator>(CollegeDepartment A,CollegeDepartment B){
	if(A.courseNum> B.courseNum)
		return true;
	else
		return false;
}
// 		Overload <
bool operator<(CollegeDepartment A,CollegeDepartment B){
	if(A.courseNum< B.courseNum)
		return true;
	else
		return false;
}
//  		OutPut
ostream& operator<<(ostream& out,const CollegeDepartment& CD){
	out<< "----------" << endl;;
	out<<"Department name: "<<CD.departName<<endl;
	out<<"Chair  name:" << CD.chairName << endl;
	out<<"Department has " <<CD.courseNum <<" course" << endl;
	for(int i=0;i<CD.courseNum;i++){
		cout<< "   Subject no#	"<< i+1 << " " << CD.ptr[i]<<endl;		
	}
	out<< endl;	
	return out;
}
//			Input
istream& operator>>(istream& in,CollegeDepartment& CD){

	cout<< endl;
	cout<<"Enter department name: ";
	in>>CD.departName;
	cout<<"Enter teacher name: ";
	in>>CD.chairName;
	cout<<"Enter Course num: ";
	in>>CD.courseNum;
	CD.ptr=new string[CD.courseNum];
	for(int i=0;i<CD.courseNum;i++){
		cout<< "   Subject no#" << i+1 << " ";
		in>>CD.ptr[i];		
	}

}

// 		Overload =
CollegeDepartment& CollegeDepartment::operator=(CollegeDepartment &CD){
    chairName=CD.chairName;
    departName=CD.departName;
	courseNum=CD.courseNum;
	delete [] ptr;
	ptr=new string[courseNum];
	for(int i=0;i<courseNum;i++){
		ptr[i]=CD.ptr[i];
	}
	return *this;
}
void Find_Most_Fewest(CollegeDepartment *A,int *top,int *bottom){
	CollegeDepartment mostNum_depart,fewNum_depart;
	mostNum_depart=fewNum_depart=A[0];
	for(int i=0;i<4 ;i++){
		if(A[i]>mostNum_depart){
			mostNum_depart=A[i];
			*top=i+1;
		}
		if(A[i]<fewNum_depart){
			fewNum_depart=A[i];
			*bottom=i+1;
		}
	}
}
int main(){
	CollegeDepartment A[4];
	for(int i=0; i<4 ; i++){
		cin >> A[i];
	}
	int top=0;
	int bottom=0;
	Find_Most_Fewest(A,&top,&bottom);
	cout << "Department has the most course is no#" << top << endl;
	cout << "Department has the fewest course is no#" <<bottom << endl;

	
}
