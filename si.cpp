#include<iostream>
using namespace std;
int main()
{
	int a,p,t,si;
	cout<<"enter age";
	cin>>a;
	cout<<"enter principle";
	cin>>p;
	cout<<"enter years";
	cin>>t;
	if(a>60)
	cout<<si=p*t*12/100,"simple interest for senior"<<si;
	else
	cout<<si=p*t*10/100,"simple interest for normal"<<si;
}
