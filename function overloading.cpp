#include <iostream>
using namespace std;

void add(int a , int b){
	cout<<a+b<<endl;
}
void add(int a){
	cout<<a<<endl;
}
void add(int a , int b , int c){
	cout<<a+b+c<<endl;
}
void add(int a , int b, int c, int d){
	cout<<a+b+c+d<<endl;
}

int main(){
	add(5,2,4);
}
