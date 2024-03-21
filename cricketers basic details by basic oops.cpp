#include <iostream>
#include <string>
using namespace std;

class Player{
	public:
		string name;
		int run;
		int noofmatch;
		int age;
	
//	public:
//		
//		void setrun(int run){
//			this->run = run;
//		}
//		void setnoofmatch(int noofmatch){
//			this->noofmatch=noofmatch;
//		}
//		void setage (int age){
//			this->age = age;
//		}
//		
//		
//		int getrun(){
//			return run;
//		}
//		int getnoofmatch(){
//			return noofmatch;
//		}
//		int getage(){
//			return age;
//		}
//	
};

int main(){
//	int n;
//	cout<<"enter number of players : ";
//	cin>>n;
//	Player *cricketer = new Player ;
	

	Player Dhoni;
	Dhoni.name = "Dhoni";
	Dhoni.age= 40;
	Dhoni.noofmatch = 60;
	Dhoni.run= 5000;

	Player Virat;
	Virat.name = "Virat";
	Virat.age= 30;
	Virat.noofmatch= 50;
	Virat.run= 4000;

	Player Rohit;
	Rohit.name = "Rohit";
	Rohit.age= 32;
	Rohit.noofmatch= 45;
	Rohit.run= 3500;
	
	Player cricketer[3] = {Dhoni, Virat, Rohit};
	for(int i=0; i<3; i++){
		cout<<"name of Player : "<<cricketer[i].name<<endl;
		cout<<"age = "<<cricketer[i].age<<endl;
		cout<<"number of matches = "<<cricketer[i].noofmatch<<endl;
		cout<<"total runs = "<<cricketer[i].run<<endl;
		cout<<"\n";
	}

	
}
 
