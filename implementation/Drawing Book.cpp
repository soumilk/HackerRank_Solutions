#include<iostream>
using namespace std;

int main()
{
	int n,p;
	cin>>n>>p;
	int s=n/2;
	int t=0;
	if(p<=n-p)
	{
		t=p/2;
	}
	else{
		t=s-p/2;
	}
	cout <<t;
	return 0;
}
