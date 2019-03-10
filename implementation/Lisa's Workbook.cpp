#include<iostream>
using namespace std;

int main()
{
	int **arr;
	int n,k;
	cin>>n>>k;
	arr=new int *[n+1];
	int p[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>p[i];
		arr[i]=new int [p[i]];
	}
	int page=1 , ans=0;
	for(int i=1; i<=n;i++)
	{
		for(int j=1 ; j<=p[i] ; j++)
		{
			if(page==j)
			{
				ans++;
			}
			if(j%k==0 && j!= p[i])
			{
				page++;
			}
		}
		page++;
	}
	cout<<ans;
	for(int i=1;i<n+1;i++)
	{
		delete arr[i];
	}
	delete arr;
	return 0;
	//int arr[][];
	//return 0;
}
