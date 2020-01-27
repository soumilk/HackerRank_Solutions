#include<iostream>
using namespace std;

int main()
{
	int n,k,m;
	cin>>n>>k>>m;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int *q ;
	int r[n];
	q= &arr[n-1];
	if(k>n)
		k= k % n;
		q=q-k+1;
	
	for(int i=0;i<n;i++){
		r[i]=*q;
		if(q==&arr[n-1])
			q=&arr[0];
		else q=q+1;
	}
	for(int j=0;j<m;j++){
		int p=0;
		cin>>p;
		cout<<r[p]<<endl;
	}
	return 0;
}
