#include<iostream>
using namespace std;
class SoccerPlayer{
	friend ostream& operator<<(ostream&, const SoccerPlayer&);
	friend istream& operator>>(istream&, SoccerPlayer&);
	
	private:
		int jerseyNum;
		int goalNum;
		int assistNum;
	public:
		SoccerPlayer(int =0,int=0,int=0);
		int Sum();
		bool operator>(SoccerPlayer&);
};
SoccerPlayer::SoccerPlayer(int JN,int GN,int AN){
	jerseyNum=JN;
	goalNum=GN;
	assistNum=AN;
}

SoccerPlayer::Sum(){
	return goalNum + assistNum;
}

ostream& operator<<(ostream& out, const SoccerPlayer& Player){
	out << "Jersey NUM: " << Player.jerseyNum << "	Num of goals: " <<Player.goalNum << "  Num of assist: " <<Player.assistNum <<  endl;
	return out;	
}
istream& operator>>(istream& in, SoccerPlayer& Player){
	cout << endl;
	cout << "Enter Jersey NUM ";
	in >> Player.jerseyNum;
	cout << "Enter Num of goals ";
	in >> Player.goalNum;
	cout << "Enter Num of goals ";
	in >> Player.assistNum;
	return in;
}


bool SoccerPlayer::operator>( SoccerPlayer &A){
	if(Sum()>A.Sum())
		return true;
	else
		return false;
}
void Run(SoccerPlayer *player){
	SoccerPlayer bestPlayer;
	int top =1;
	bestPlayer= player[1];
	for(int i=1;i<=11;i++){
		if(player[i] > bestPlayer){
			bestPlayer = player[i];
			top = i;
		}
	}
	cout << " Soccerplayer have the most goals and assist is Number#" <<top <<" : "<<bestPlayer.Sum()<<" scores"<<endl;; 
}
int main(){
	SoccerPlayer player[12];
	for(int i = 1;i <= 11; i++ ){
		cout <<"Enter player #" << i;
		cin >> player[i];
		cout << player[i];
		cout << endl;
	}
	Run(player);
}
