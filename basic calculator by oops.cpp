#include <iostream>
using namespace std;

class calculator{
	public:
	int a;
	int b;
	void add(){
		cout<<a<<" + "<<b<<" = "<<a+b<<endl;
	}
	void subtract(){
		cout<<a<<" - "<<b<<" = "<<a-b<<endl;
	}
	
};


int main(){
	calculator calci;
//	calci.a = 8; 
//	calci.b = 5;

	cout<<"enter two integers : ";
	cin>>calci.a>>calci.b ;
	
	calci.add();
	calci.subtract();	
	
}
