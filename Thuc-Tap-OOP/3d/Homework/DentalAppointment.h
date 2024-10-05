class DentalAppointment{
	private:
		Person patient;
		Date date;
		Time time;
		int duration; //<240
	public:
    	DentalAppointment(string = "x",string = "x",string = "x",
   		int = 1,int = 1,int = 2000,int = 0,int = 0,int = 0);
   		void displayAppointment();
};
DentalAppointment::DentalAppointment(string FN, string LN, string ZC, int denDay, int denMonth, int denYear,int denHour,int denMin,int duration):
patient(FN,LN,ZC), date(denDay,denMonth,denYear), time(denHour,denMin),duration(duration){
	if(duration>=240)	this->duration=0;
};
void DentalAppointment::displayAppointment(){
	patient.displayPerson();
	cout << "DATE: ";
	date.displayDate();
	cout << "It starts at ";
	time.displayTime(); cout << " for ";duration;
		
}



