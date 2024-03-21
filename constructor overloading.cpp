#include <iostream>
using namespace std;

class Bike{
	public:
		static int noofbikes ;  //this belongs to the class
		int tyresize ;
		int enginesize ;
		
		
		
		
		Bike (int ts) : tyresize(ts), enginesize(100){}
		Bike(int ts, int es): tyresize(ts), enginesize(es){}
		Bike() : tyresize(10), enginesize(150){}
		
		static void increasenoofbikes(){
			noofbikes++ ;
		}
};

int Bike::noofbikes = 10 ; 

int main(){
	Bike tvs(12,100);
	cout<<tvs.tyresize<<endl ;
	Bike honda(13,140);
	cout<<honda.enginesize;
}
