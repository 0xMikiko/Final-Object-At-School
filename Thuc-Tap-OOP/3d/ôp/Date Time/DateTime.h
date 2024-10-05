class DateAndTime{
	private:
		int month;
		int day;
		int year;
		int hour;
		int minute;
		int second;
	public:
      
		DateAndTime(int = 1, int = 1, int = 1900, int = 0, int =0, int = 0); 
        void setDate(int, int, int); //line 69
        void setMonth(int);			 //line 84	
        void setDay(int);			 //line 91
        void setYear(int);			 //line 98
        int getDay();				 //line 104
        int getMonth();				 //line 108
        int getYear();				 //line 112
        void nextDay();				 //line 205
        void setTime(int, int, int); //line 116
        void setHour(int);		     //line 131
        void setMinute(int);		 //line 138
        void setSecond(int);		 //line 145
        int getHour();				 //line 153
        int getMinute();			 //line 157
        int getSecond();			 //line 161
        void printStandard();		 //line 166
        void printTime();			 //line 170
        int monthDay(int);			 //line 191
        void tick();				 //line 174
        bool leapYear();			 //line 184
};

DateAndTime::DateAndTime(int Day,int Month,int Year,int Hour,int Min,int Second){
	if(Day <= 0 || Day > 31)	
		day=1;
	else	
		day=Day;
	
	if(Month <= 0 || Month > 12)
		month=1;
	else
		month=Month;
		
	if(Year <= 0 )
		year=1900;	
	else 
		year=Year;
	
	if(Hour <0 || Hour >24)
		hour = 0;
	else 
		hour = Hour;
		
	if(Min <0 || Min >60)
		minute = 0;
	else 
		minute = Min;
		
	if(Second <0 || Second >60)
		second = 0;
	else 
		second = Second;  
	
}

void DateAndTime::setDate(int Day, int Month, int Year) {
    if(Day > 0 || Day <= 31) 
		day = Day;
    else 
		day = 1;
    if(Month > 0 || Month <= 12) 
		month = Month;
   	else 
		month = 1;
	if(Year > 0 )
		year=Year;	
	else 
		year=1900;	
}

void DateAndTime::setDay(int Day) {
    if(Day > 0 || Day <= 31) 
		day = Day;
    else 
		day = 1;
}

void DateAndTime::setMonth(int Month) {
    if(Month > 0 || Month <= 12) 
		month = Month;
   	else 
		month = 1;
}

void DateAndTime::setYear(int Year) {
	if(Year > 0 )
		year=Year;	
	else 
		year=1900;}

int DateAndTime::getDay() {
    return day;
}

int DateAndTime::getMonth() {
    return month;
}

int DateAndTime::getYear() {
    return year;
}

void DateAndTime::setTime(int Hour, int Min, int Second) {
    if(Hour >= 0 || Hour < 23) 
		hour = Hour;
    else 
		hour = 0;
    if(Min >= 0 || Min < 60) 
		minute = Min;
    else 
		minute = 0;
    if(second >= 0 || second < 60)
		second = Second;
    else 
		second = 0;
}

void DateAndTime::setHour(int Hour) {
 	if(Hour <0 || Hour >60)
		hour = 0;
	else 
		hour = Hour;;
}

void DateAndTime::setMinute(int Min) {
	if(Min <0 || Min >60)
		minute = 0;
	else 
		minute = Min;
}

void DateAndTime::setSecond(int Second) {
	if(Second <0 || Second >60)
		second = 0;
	else 
		second = Second;  
	
}

int DateAndTime::getHour() {
    return hour;
}

int DateAndTime::getMinute() {
    return minute;
}

int DateAndTime::getSecond() {
    return second;
}

void  DateAndTime::printStandard(){
	cout << day <<  "/" << month << "/" << year << endl;	
}

void  DateAndTime::printTime(){
	cout << hour <<  ":" << minute << ":" << second << endl;	
}

void DateAndTime::tick(){
	setSecond((getSecond() + 1 ) % 60);
	if (getSecond()==0) {
		setMinute((getMinute() + 1) % 60);
		if (getMinute() == 0) {
			setHour((getHour() + 1) % 24);
		}
	}
}

bool DateAndTime::leapYear(){
	if(year%4==0)
		return 1;
	else
		return 0;
}

int DateAndTime::monthDay(int month){
	switch(month){
    	case 1:case 3:case 5:case 7:case 8:case 10:case 12:
			return 31;
        case 4:case 6:case 9:case 11:
     		return 30;
	    case 2:
    		if(leapYear())
    			return 29;
    		else
    			return 28;
  }
}

void DateAndTime::nextDay(){
	
	if((month == 12) && day==monthDay(12)){
		year++;
		month=1;
		day=1;
	}
	else if((month==1 || month==3 || month == 5|| month ==7|| month==8 || month==11)&& day==31){
		month++;
		day=1;
	}
	else if((month==4 || month==6 || month==9 || month==11)&& day==30){
		month++;
		day=1;
	}
	else if(month == 2 && day == monthDay(2)){
		day=1;
		month++;			
	}
	else{
		day++;
	}
}
