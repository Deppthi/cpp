#include<iostream>
using namespace std;
int main(){
	int a,b,temp;
	
	cout<<"enter two numbers";
	cin>>a,b;
	
	cout<<"before swapping";
	cout<<"a="<<a<<"b"<<b;
	
	temp=a;
	a=b;
	b=temp;
	
	cout<<"after swapping";
	cout<<"a="<<b<<"b="<<a;
	
	return 0;
}
