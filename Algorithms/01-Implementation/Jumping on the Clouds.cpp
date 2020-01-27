#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	int count=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;)
	{
		if(arr[i+2]==0)
		{
			i=i+2;
			count ++;
		}
		else
		{
			i=i+1;
			count ++;
		}
        if(i==n-1)
            break;
	}
	cout<<count ;
	return 0;
}
