#include<iostream>
using namespace std;

int utopiantree(int n)
{
	if(n==0)
	return 1;
	
	int p=1,h=1;
	while(p<=n)
	{
		if(p%2!=0)
		{
			h=h*2;
			p++;
		}
		else
		{	h=h+1;
			p++;
		}
		
	}
	return h;
}
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		int result=utopiantree(n);
		cout<<result<<endl;
	}
	return 0;
}
