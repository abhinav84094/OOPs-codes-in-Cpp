#include <iostream>
using namespace std;

class Bike{
	public:
		int tyresize ;
		int enginesize ;
		
		
		//default constructor
//		Bike (){
//			cout<<"constructor call hua"<<endl;
//		}
		
		Bike (int tyresize, int enginesize){
			this->tyresize = tyresize ;
			this->enginesize = enginesize ;
			cout<<"constructor call hua"<<endl;
		}
		
		
		~ Bike(){
			cout<<"destructor call hua"<<endl ;
		}
		
		
};


int main(){
	
	Bike tvs(12, 100);
	Bike honda(13, 150);
	Bike royalenfield(15, 350) ; 
	cout<<tvs.tyresize<<" "<<tvs.enginesize<<endl;
	cout<<honda.tyresize<<" "<<honda.enginesize<<endl;
	cout<<royalenfield.tyresize<<" "<<royalenfield.enginesize<<endl;
	
	
}
