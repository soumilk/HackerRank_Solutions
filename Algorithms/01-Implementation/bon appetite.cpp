#include<iostream>
using namespace std;

int main()
{
	int n,k,p,s=0;
	cin>>n>>k;
	int items[n];
	for(int i =0;i<n;i++)
	{
		cin>>items[i];
		s=s+items[i];
	}
	s=(s-items[k])/2;
	cin>>p;
	if(p>s)
	cout<<p-s;
	else cout<<"Bon Appetit";
	return 0;
}
