#include<iostream>
using namespace std;
int main()
{
	int i;
	float mark,sum=0,avg;
	cout<<"enter 5 sub marks";
	for (i=0;i<=5;i++)
	{
		cin>>mark;
		sum=sum+mark;
	}
	avg=sum/5;
	cout<<"\n grade=";
	if(avg>90)
	cout<"A";
	else if(avg>=81 && avg<90)
	cout<<"B";
	else
	cout<<"F";
	cout<<endl;
	return 0;
}
