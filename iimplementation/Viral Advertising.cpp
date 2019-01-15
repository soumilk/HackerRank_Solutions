#include<iostream>
using namespace std;

int main()
{
	int n,adv=0,t=5;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		adv=adv+t/2;
		t=t/2*3;
	}
	cout<<adv;
	return 0;
}
