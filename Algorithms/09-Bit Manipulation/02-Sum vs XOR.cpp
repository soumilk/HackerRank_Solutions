#include<iostream>
#include<cmath>
using namespace std;

// This is the function for fast exponentiation 
long long int power(long long int count)
{
    long long int ans=1;
    long long int num=2;
    while(count>0)
    {
        if (count&1)
        {
            ans=ans*num;
        }
        num=num*num;
        count =count>>1;    
    }
    //cout<<"ans "<<ans<<endl;
    return ans;
}

int main()
{
    long long int n;
    cin>>n;
    long long int  count=0;
    while(n>0)
    {
        long long int temp=n&1;
        if(!(n&1))
        {
            count++;
        }
        n=n>>1;
    }
    long long int ans=power(count);
    cout<<ans;
    return 0;
}
