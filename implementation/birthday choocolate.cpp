#include<iostream>
using namespace std;

 int chocolate(int n , int d,int m, int arr[])
{
     int count =0;
	for (int i=0;i<n;i++)
	{
		int sum=arr[i];
		for (int j=i+1;j<m+i;j++)
		{
			sum=sum+arr[j];
		}
		if(sum==d){
			count ++;
		}
	}
	if(n==1){
		if(arr[0]==d)
		return 1;
	}

	return count;
}

int main()
{
	int n,d,m;
	cin>>n;
	int arr[n];
	for (int i=0; i<n;i++)
	{
		cin>>arr[i];
	}
	cin>>d>>m;
	int result = chocolate(n,d,m,arr);
	cout <<result;
	return 0;
	
	
}
