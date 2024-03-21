#include <iostream>
using namespace std;

class Book{
	private:
	int page;
	int price;
	char name;
	
	public:	
	void setprice(int pr){
		price = pr;
	}
		
	void setpage(int pg){
		page = pg;
	}
	
	int countbooks(int p){
		if(price < p)  return 1;
		else  return 0;
	}

//	bool isBookPresent(char book){
//		if(name == book) return true;
//		else return false;
//	}
		
	int getprice(){
		return price;
	}
	
	int getpage(){
		return page ;
	}		
		

};

int main(){
	
	Book math;
	math.setpage(100);
	math.setprice(500);
	cout<<"page = "<<math.getpage()<<endl;
	cout<<"price = "<<math.getprice()<<endl;
	
	Book harrypotter;
	harrypotter.setprice(900);
	harrypotter.setpage(420);
//	cout<<harrypotter.isBookPresent('H')<<endl ;
	cout<<harrypotter.countbooks(500);
	
}
