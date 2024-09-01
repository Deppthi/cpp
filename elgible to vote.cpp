#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter age";
	cin>>a;
	if(a>=18)
	cout<<"\n person eligible to vote";
	else
	cout<<(18-a)<<"years left to vote";
	
}
