#include<stdio.h>
#include<conio.h>
int insertarray(int arr[],int a,int key,int cap)
{
	if(a>=cap)
	{
		return a;
	}
	else
	{
		arr[a]=key;
		return a+1;
	}
}
int main()
{
	
	int arr[10];
	int key=60,cap=sizeof(arr)/sizeof(arr[0]);
	int a=5;
	
	for(int i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<a;i++)
	{
		printf("%d ",arr[i]);
	}
	a=insertarray(arr,a,key,cap);
	printf("after insert");
	for(int i=0;i<a;i++)
	{
		printf("%d",arr[i]);
	}

}
