#include <iostream>
using namespace std;
int swap(int &a,int &b){
	int temp;
	a=temp;
	a=b;
	b=temp;
	}
int main(){
	int a=10,b=8;
    cout<<"Before swapping: "<<a<<" "<<b<<endl;
	swap(a,b);
	cout<<"After swapping: "<<a<<" "<<b<<endl;
	return 0;
	
}