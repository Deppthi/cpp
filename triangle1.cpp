#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"enter the size";
	cin>>n;
	cout<<"right angle triangle pattern\n";
	for(i = 0 ; i < n ; i++)
	{
		for(j = i ; j <= n ; j++)
		{
			cout<< " ";
		}
		for(j = 1 ; j <= i ; j++)
		{
			cout<<" *";
		}
		cout<<"\n";
	}
	return 0;
}
