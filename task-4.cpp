#include <iostream>
using namespace std;
bool isPrime(int n){
	for(int i=2;i*i<=2;i++){
		if(n%i==0)
			return false;
	}
	return true;
}
int main(){
	int a=6;
	int result=isPrime(a);
	if(isPrime(6)){
		cout<<"false"<<endl;}
		else{
		
	cout<<"true"<<endl;
	}
	
    return 0;
	
}