#include<iostream>
using namespace std;
int main()
{
	int i,j,n,k;
	cout<<"enter rows";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for (k=0;k<=n-i;k++)
		     cout<<"";
		for (j=1;j<=i;j++)
		     cout<<i;
		cout<<endl;
		 }
	for(i=n-1;i>0;i--)
	{
		for (k=0;k<=n-i;k++)
		     cout<<"";
		for (j=1;j<=i;j++)
		     cout<<i;
	    cout<<endl;
	}
	return 0;
}




