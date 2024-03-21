#include <iostream>
#include <cmath>
using namespace std;
//bool isPrime(int n){
//	for(int i=2; i<=sqrt(n); i++){
//		if(n%i==0) return false;
//	}
//	return true ;
//}
void printfactors(int n){
	cout<<"factors of "<<n<<" is = ";
	for(int i=1; i<=n ; i++){
		if(n%i==0){
			cout<<i<<" ";
		}
	}
}
int main(){
	int n;
	cin>>n;
//	int ans = isPrime(n);
//	if(ans==1) cout<<n<<" is a Prime number "<<endl;
//	else cout<<n<<" is not a Prime number "<<endl;
	printfactors(n);
}
