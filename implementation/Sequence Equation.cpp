#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int A[n+1],B[n+1];
	int k=1;
	for (int i=1;i<=n;i++)
	{
		cin>>A[i]; 
	}
	for(int i=1;k<=n;++i)
	{
		if(A[i]==k)
		{	
			B[k]=i;
			i=0;
			++k;
		}
	}
	for(int i=1 ;i<=n ;i++ )
	{
		for (int j=1 ;j<=n ;j++ )
		{
			if(A[j]==B[i])
			{
				cout<<j<<endl;
				break;
			}
		}
	}
	return 0;
}
