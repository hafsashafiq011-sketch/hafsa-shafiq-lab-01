#include <iostream>
using namespace std;

int multiply(int &a,int &b){
	return a*b;
}
int main(){
	int a=8,b=7;
	int result=multiply(a,b);
	cout<<"Product: "<<result<<endl;
	return 0;
}