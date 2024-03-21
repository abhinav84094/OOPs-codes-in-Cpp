#include <iostream>
using namespace std;

class Gun{
	public:
	int amo ;
	int damage;
	int scope;
};



class Player{
	private:
		class Helmet{
			int hp;
			int level;
		
		public:
			void sethp(int hp){
				this->hp = hp;
			}
			void setlevel (int level){
				this -> level = level ;
			}
			int gethp(){
				return hp;
			}
			int getlevel (){
				return level ;
			}
	
};
		int health;
		int score;
		int age;
		bool alive;                
		Gun gun; 
		Helmet helmet;
	
		
		
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
		
		void setgun(Gun gun){
			this->gun = gun;
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
		Gun getgun(){
			return gun;
		}
		
		void sethelmet(int level){
			Helmet *helmet = new Helmet ;
			helmet -> setlevel(level);
			int health=0;
			if(level==1) health = 25;
			else if(level== 2)  health=50;
			else if(level == 3)  health = 100;
			else cout<<"error, invalid level!!";
			
			helmet->sethp(health);
			this->helmet= *helmet ;
		}	
	
	Helmet gethelmet(){
		cout<<helmet.gethp()<<endl;;
		cout<<helmet.getlevel()<<endl;
	}
};

int main(){

	Gun akm;
	akm.amo= 100;
	akm.damage= 40;
	akm.scope= 2;
	
	Gun awm;
	awm.amo= 10;
	awm.damage= 180;
	awm.scope= 8;
	
	Player aman;
	aman.setage(20) ;
	aman.sethealth(100);
	aman.setscore(100);
	aman.setisalive(true) ;
	aman.setgun(awm);
	aman.sethelmet(3);
	
	Player abhinav;
	abhinav.setage(18);
	abhinav.sethealth(200);
	abhinav.setscore(160);
	abhinav.setisalive(true);
	abhinav.setgun(akm);
	abhinav.sethelmet(1);
	
	Gun gun123 = aman.getgun();
	cout<<gun123.damage<<endl;
	cout<<gun123.amo<<endl;
	cout<<gun123.scope<<endl;
	
	aman.gethelmet();
	abhinav.gethelmet();

}

