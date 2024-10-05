//	Name: Duong Quang Minh
//	Class:	Bao dam an toan thong tin
//	FileID:	CollegeCourse



#include <iostream>
using namespace std;

class CollegeCourse
{
    private:
      string department;
      int courseNum;
      int seats;
    public:
      void setDepartmentAndCourse(string, int);
      void setSeats(int);
      void displayCourseData();
};
void CollegeCourse::setDepartmentAndCourse(string dept, int num)
{
	department = dept;
	courseNum = num;
}
void CollegeCourse::setSeats(int seat) 
{
	seats = seat;
}
void CollegeCourse::displayCourseData()
{
	cout << "Department: " << department << endl;
	cout << "Num of Courses: " << courseNum << endl;
	cout << "Seats: " << seats << endl;
}

int main(){
	CollegeCourse CNTT, Ly;
	
	CNTT.setDepartmentAndCourse("Toan",5);
	CNTT.setSeats(50);
	CNTT.displayCourseData();	
	
	Ly.setDepartmentAndCourse("Ly",3);
	Ly.setSeats(40);
	Ly.displayCourseData();
	
}

