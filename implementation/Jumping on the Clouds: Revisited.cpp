#include<iostream>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int E=100;
	for(int i=0;i<n;)
	{
		if(arr[i]==0)
		E=E-1;
		if(arr[i]==1)
		E=E-3;
		i=i+k;
	}
	cout<<E;
	return 0;
}
