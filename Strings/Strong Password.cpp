#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int p=0,q=0,r=0,t=0;
	
		for(int i=0;i<n;i++)
		{
			
			if(s[i]>=33 && s[i]<=45){
				p=1;
			}
			if(s[i]>=65 && s[i]<=90){
				q=1;
			}
			if(s[i]>=97 && s[i]<=122){
				r=1;
			}
			if(s[i]>=48 && s[i]<=57){
				t=1;
			}				
		}
	int y= 4-(p+q+r+t);
	if(n>=6)
	cout<<y;
	else
	{
		int x=6-n;
		if(x>=y)
		cout<<x;
		if(y>x) 
		cout<<y;
	}
	return 0;
}
