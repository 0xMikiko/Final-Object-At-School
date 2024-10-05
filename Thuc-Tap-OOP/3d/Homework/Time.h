class Time{
	private: 
		int hours;
		int minutes;
	public:
		Time(int = 0, int = 0);
		void displayTime(); // 12:30
		Time incrementTime(int min);
};
Time::Time(int Hour,int Min){
	if(Hour<0 || Hour >24 || Min<0 || Min>60){
		cout << "Wrong Time Input! Set default" << endl;
		Hour=0; Min=0;
	}
	else{
		hours = Hour;	minutes=Min;
	}
}
void Time::displayTime(){
	cout << "It is " << hours << ":" << minutes << endl;
	
}

Time Time::incrementTime(int addMin) {
	int newMin;
	int newHour;
	if(newMin>60){
		int newHour = hours + newMin/60;
		int newMin  = ( minutes + addMin)%60;
	}
	Time newTime(newHour,newMin);
	return newTime;

}
