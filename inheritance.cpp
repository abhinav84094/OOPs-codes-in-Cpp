#include <iostream>
#include <string>
using namespace std;

class Vehicle{
	public:
		int tyresize;
		int enginesize;
		int lights;
		string companyname;
};

class Car: public Vehicle{
	public:
		int stearingsize;
	
};

class Bike: public Vehicle{
	public:
		int handlesize;
		
};

int main(){
	Bike honda;
	honda.handlesize = 5;
	honda.enginesize= 150;
	honda.tyresize=12;
	honda.companyname = "Honda" ;
	
	cout<<honda.companyname<<endl;
	cout<<honda.enginesize<<endl;
	cout<<honda.handlesize<<endl;
	cout<<honda.tyresize<<endl;
}
