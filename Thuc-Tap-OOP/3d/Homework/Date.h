class Date{
	private:
		int day, month, year;
	public:
		Date(int = 1, int = 1,int = 2000);
		void displayDate();
};
Date::Date(int Day, int Month,int Year){
	if(Day<=0 || Month <=0 || Year <=0){
		cout << "Wrong Date Input! Set default" << endl;
		Day=1;	Month=1;	Year=1;
	}
	else{
		switch(Month){
			case 1:case 3:case 5:case 7:case 8:case 10:case 12:
				if(Day>31){
					cout << "Wrong Day Input!" << endl;
				}
				day=Day; month=Month;	year=Year;
				break;
			case 4:case 6:case 9:case 11:
				if(Day>30){
					cout << "Wrong Day Input!" << endl;
				}
				day=Day; month=Month;	year=Year;
				break;
			case 2:
				if(Year%4==0){
					if(Day>29){
					cout << "Wrong Day Input!" << endl;
					}
					day=Day; month=Month;	year=Year;
				}
				else{
					if(Day>28){
					cout << "Wrong Day Input!" << endl;
					}
					day=Day; month=Month;	year=Year;
				}
				break;
	
			default:cout<< "Wrong Month Input" <<endl;			
		}
	}
}
void Date::displayDate(){
	cout << day << " / "<< month << " / " << year << endl;
}
