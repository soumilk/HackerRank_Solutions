#include<iostream>
using namespace std;

int main()
{
	int n,count=0;
	cin>>n;
	int s[n];
	for (int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(s[j]>s[j+1])
			{
				int temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}
	for (int i=0;i<n ;)
	{
		if(s[i]==s[i+1])
		{
			count ++;
			i=i+2;
		}
		else i++;
	}
	
	cout<<count ;
	return 0;
}
