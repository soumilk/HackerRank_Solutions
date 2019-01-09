#include<iostream>
using namespace std;

int main()
{
    int n,k;
    cin>>n;
    cin>>k;
    int num[n]={0};
    int fre[k]={0};
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
        fre[num[i]%k]++;
    }
 if(k%2==1)
    {
        if(fre[0]!=0)
        count++;
        for(int i=1;i<=k/2;i++)
        {
        if(fre[i]>=fre[k-i])
            count=count+fre[i];
        else
            count=count+fre[k-i];
        }
    }
    if(k%2==0)
    {
        if(fre[0]!=0)
            count++;
            if(fre[k/2]!=0)
            count++;
        for(int i=1;i<k/2;i++)
        {
           if(fre[i]>=fre[k-i])
            count=count+fre[i];
           else
            count=count+fre[k-i];
        }
    }
    cout<<count;
}
