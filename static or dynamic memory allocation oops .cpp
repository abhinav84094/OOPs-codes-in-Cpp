#include <iostream>
using namespace std;

class Player{
	private:
		int health ;
		int age;
		int score;
		bool alive;
		
	public:
		void sethealth(int health){
			this->health = health ;
		}
		void setage(int age){
			this->age = age;
		}
		void setscore(int score){
			this->score = score ;
		}
		void setisalive(bool alive){
			this->alive = alive ;
		}
		
		int gethealth(){
			return health ;
		}
		int getage(){
			return age;
		}
		int getscore(){
			return score ;
		}
		bool isalive(bool alive){
			return alive ;
		}
		
		
	
};

int addscore(Player a, Player b){
	return a.getscore()+ b.getscore() ;
}

Player getmaxscorePlayer(Player a, Player b){
	if(a.getscore() > b.getscore())  return a;
	else return b;
}

int main(){

	Player aman;
	aman.setage(20) ;
	aman.sethealth(100);
	aman.setscore(100);
	aman.setisalive(true) ;
	
	Player abhinav;
	abhinav.setage(18);
	abhinav.sethealth(200);
	abhinav.setscore(160);
	abhinav.setisalive(true);

	Player *newplayer = new Player ;
	Player ritu = *newplayer ;

//	cout<<"sum of score of aman and abhinav = "<<addscore(aman, abhinav)<<endl;
	
//	Player ap = getmaxscorePlayer(aman, abhinav);
//	cout<<ap.getscore()<<endl;
//	cout<<ap.gethealth()<<endl;

	ritu.setscore(40);
	ritu.setage(25);
	cout<<ritu.getscore()<<endl;
	cout<<ritu.getage()<<endl;
	
	Player megha = *newplayer ;
	megha.setscore(50);
	megha.setage(20);
//	cout<<megha.getage();
	
	
	
}
