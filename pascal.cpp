#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k,a;
	cout<<"enter rows";
	cin>>n;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<n-i;j++)
		cout<<" ";
		a=1;
		for(k=0;k<i;k++)
		{
			cout<<a<<" ";
			a=a*(i-k)/(k+1);
		}
		cout<<"\n";
	}
}

