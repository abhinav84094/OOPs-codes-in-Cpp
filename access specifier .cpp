#include <iostream>
using namespace std;

class A{
	private :         //can't accessed from outside  ,   can't be inherited
		int a_ka_private;   
		
	protected :      //can't accessed from outside  ,   can be inherited
		int a_ka_protected;
		
	public:          //can be accessed from outside   , can be inherited
		int  a_ka_public;
};

class B : public A{
	public:
		int b_ka_public;
		
		
		
};


int main(){
	B b;
	b.b_ka_public = 10 ;
	b.a_ka_public = 15 ;
	cout<<b.b_ka_public<<endl;
	cout<<b.a_ka_public<<endl;
	
}
