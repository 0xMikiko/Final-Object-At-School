class MagazineSubscription {
    private:
        Person subscriber;
        Date subscriptionStart;
        Date expirationDates;
    public:
        MagazineSubscription(string = "x", string = "x", string = "x", 
        int = 1, int = 1, int = 2000, int = 1, int = 1, int = 2000);
        void displayMagazineSubscription();
};
MagazineSubscription::MagazineSubscription(string FN, string LN, string ZC, int subDay, int subMonth, int subYear, int expDay,
int expMonth, int expYear): subscriber(FN, LN, ZC), subscriptionStart(subDay,subMonth,subYear), expirationDates(expDay, expMonth, expYear) {}

void MagazineSubscription::displayMagazineSubscription(){
	subscriber.displayPerson();
	cout << "Has subscribe on ";
	subscriptionStart.displayDate();
	cout << "It expires on ";
	expirationDates.displayDate();
}
