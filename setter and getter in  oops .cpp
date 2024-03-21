#include <iostream>
using namespace std;

class Player{
	private:
	int score;
	int health;
	char name[20];
	
	public:	
	void setscore(int s){
		score = s;
	}
		
	void sethealth(int h){
		health = h;
	}
		
	int getscore(){
		return score;
	}
	
	int gethealth(){
		return health ;
	}		
		
//	void showhealth(){  //member function
//		cout<<"health is : "<<health<<endl ;
//	}
//	
//	void showscore(){
//		cout<<"score is : "<<score<<endl;
//	}
};

int main(){
	
	
	Player amit ;
//	amit.score = 90;
//	amit.health = 100;
//	cout<<amit.score<<endl;
//	cout<<amit.health<<endl;
//	amit.showhealth();
//	amit.showscore();
	amit.setscore(10);
	amit.sethealth(100);
	cout<<"score = "<<amit.getscore()<<endl;
	cout<<"health = "<<amit.gethealth()<<endl;
	
//	Player aman;
//	aman.health = 200;
//	aman.score = 100;
//	cout<<aman.score<<endl;
//	cout<<aman.health<<endl;
	
}
