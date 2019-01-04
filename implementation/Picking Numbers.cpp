#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	int r[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1]){
			int t=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=t;
		}
		}
	}
	for(int i=0;i<n;i++)
	{
		r[i]=0;
		for(int j=i;j<n;j++)
		{
			if(arr[j]-arr[i]<=1)
			r[i]++;
			else break;
		}
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(r[j]>r[j+1]){
			int t=r[j];
			r[j]=r[j+1];
			r[j+1]=t;
		}
		}
	}
	cout<<r[n-1];
	return 0;
}
