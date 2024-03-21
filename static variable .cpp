#include <iostream>
using namespace std;

class Bike{
	public:
		static int noofbikes ;  //this belongs to the class
		int tyresize ;
		int enginesize ;
		
		
		
		
		Bike (int tyresize, int enginesize=200){
			this->tyresize = tyresize ;
			this->enginesize = enginesize ;
			cout<<"constructor call hua"<<endl;
		}
		
		static void increasenoofbikes(){
			noofbikes++ ;
		}
};

int Bike::noofbikes = 10 ; 

int main(){
	
	Bike tvs(12, 100);
	Bike honda(13, 150);
	Bike royalenfield(15, 350) ; 
	
	tvs.increasenoofbikes();
	cout<<tvs.noofbikes<<endl;
	honda.increasenoofbikes();
	cout<<honda.noofbikes<<endl;
	royalenfield.increasenoofbikes();
	cout<<royalenfield.noofbikes<<endl;
//	cout<<tvs.tyresize<<" "<<tvs.enginesize<<endl;
//	cout<<honda.tyresize<<" "<<honda.enginesize<<endl;
//	cout<<royalenfield.tyresize<<" "<<royalenfield.enginesize<<endl;
	
}
