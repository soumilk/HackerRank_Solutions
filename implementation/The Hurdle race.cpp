#include<iostream>
using namespace std;

int hurdle(int n,int k,int jump[])
{
	int l=0;
 	for(int i=0;i<=n;i++)
	 {
 		for(int j=0;j<=n-i;j++)
 		{
 			if(jump[j]>jump[j+1])
 			{
 				int temp=jump[j];
 				jump[j]=jump[j+1];
 				jump[j+1]=temp;
 			}
 		}
 	}
	l=jump[n-1]-k;
    if(l<0)
        return 0;
	return l;
}
int main()
{
	int n , k ;
	cin>>n>>k;
	int jump[n];
	for (int i=0;i<n;i++)
	{
		cin>>jump[i];
	}
	int t=hurdle(n,k,jump);
	cout<<t;
	return 0;
}
