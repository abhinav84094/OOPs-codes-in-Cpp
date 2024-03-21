#include <iostream>
using namespace std;

class Player{
	public:
	int score;
	int health;
	char name[20];
		
	void showhealth(){  //member function
		cout<<"health is : "<<health<<endl ;
	}
	
	void showscore(){
		cout<<"score is : "<<score<<endl;
	}
};

int main(){
	
	
	Player amit ;
	amit.score = 90;
	amit.health = 100;
//	cout<<amit.score<<endl;
//	cout<<amit.health<<endl;
	amit.showhealth();
	amit.showscore();
	
//	Player aman;
//	aman.health = 200;
//	aman.score = 100;
//	cout<<aman.score<<endl;
//	cout<<aman.health<<endl;
//	
	
}
