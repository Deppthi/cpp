#include<iostream>
using namespace std;
int main()
{
	int n,tax;
	cout<<"enter income";
	cin>>n;
	if(n<60000)
	tax=0;
	if(n>60000 && n<=150000)
	tax=n*0.05;
	if(n>150000 && n<=500000)
	tax=n*0.1;
	if(n>500000)
	tax=n*0.15;
	cout<<"tax="<<tax;
	cout<<endl;
	return 0;
}
