#include <iostream>
#include <string>
using namespace std;

class student{
	public:
		string name;
		int roll;
		float marks;	
};



int main(){
	
	student s1;
	s1.name = "Abhinav";
	s1.roll = 1;
	s1.marks = 81 ;
	cout<<s1.name<<endl;
	cout<<s1.roll<<endl;
	cout<<s1.marks<<endl;
	
}
