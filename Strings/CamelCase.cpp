#include<iostream>
using namespace std;

int main()
{
	string s ;
	cin>>s ;
	int count=0;
	for (int i=0;i<s.length();i++)
	{
		if( int(s[i])<=90 && int(s[i])>=65)
		count ++;
	}
	cout<<count+1;
}
