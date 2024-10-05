class Name {
	private:
  		string first;
  		string middle;
  		string last;
	public:
    	Name(string, string, string);
    	void displayFullName();
};

Name::Name(string FN, string MD, string LN) {
  	first=FN;
	middle=MN;
	last=LN
}

void Name::displayFullName() {
    cout << first <<" "<<middle<<" "<<last<< endl;
}
