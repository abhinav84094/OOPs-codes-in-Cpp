#include <iostream>
#include <cmath>
using namespace std;
bool checkPerfectNumber(int n){
	int sum=0;
	for(int i=1; i<sqrt(n); i++){
		if(n%i==0){
			sum= sum+i;
		}
	}
	for(int i=sqrt(n); i>=1; i--){
		if(n%i==0){
			sum = sum+(n/i);
		}
	}
	sum= sum-n ;
	return (sum==n);
}
int main(){
	int n;
	cin>>n;
	int ans = checkPerfectNumber(n);
	if(ans==1){
		cout<<n<<" is a Perfect Number";
	}
	else{
		cout<<n<<" is not a Perfect Number";
	}
}
