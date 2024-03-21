#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return false;
	}
	return true ;
}
int main(){
	int n;
	cin>>n;
	int ans = isPrime(n);
	if(ans==1) cout<<n<<" is a Prime number "<<endl;
	else cout<<n<<" is not a Prime number "<<endl;
}
