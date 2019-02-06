#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int beautifuldays(int i , int j, int k)
{
	static int count=0;
	for (int s=i ; s<=j ;s++)
	{	int t=s;
		int rev=0;
		for( ;t>0 ; )
		{
			rev=rev*10+t%10;
			t=t/10;
		}
		if((abs(s-rev))%k==0){
			count ++;
		}
	}
	return count;
}


int main()
{
	int i,j,k;
	cin>>i>>j>>k;
	int result =beautifuldays(i,j,k);
	cout<<result<<endl;
	return 0;
}
