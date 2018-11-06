#include<iostream>
using namespace std;

int main()
{
	int n,feb=28;
	cin>>n;
	if(n<1918)
    {
        if(n%4==0)
            feb=29;
    }
    if(n>1918)
    {
        if((n%4==0 && n%100!=0) || (n%100==0 && n%400==0))
            feb=29;
    }
    if(n==1918)
        feb=15;
    
	int t=31+feb+31+30+31+30+31+31;
	int d=256-t;
	cout<<d<<".09."<<n;
	return 0;
	
}
