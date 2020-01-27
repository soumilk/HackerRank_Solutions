#include<iostream>
using namespace std;

string Angrymaster(int n,int k,int arr[])
{
	int p=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<=0)
		p++;	
	}
	if(p>=k)
	return "NO" ;
	else return "YES";
	
}
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,k;
		cin>>n>>k;
		int arr[n];
		for(int j=0;j<n;j++)
		cin>>arr[j];
		string result = Angrymaster(n,k,arr);
		cout<<result<<endl;
	}
	return 0;
}
