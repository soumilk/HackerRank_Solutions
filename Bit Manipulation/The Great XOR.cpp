/*
* In this problem, we actually need to find all the numbers which are greater then the given numbers what could be generated 
by doing XOR operation. So lets take an example of 10, 
binary of 10 is 1010, now maximum number could be 1111, now 5 numbers are greater then 10 and less then 11, so this is our answer.
* Here we are generating the nearest power of 2 and then computing the answer 
*/

#include<iostream>
#include<cmath>
using namespace std;
#define ll long long 

// This is the program for fast exponentiation 
ll power(ll num, ll exponent)
{
    if(exponent==0)
    return 1;

    ll ans=power(num,exponent/2);
    ans=ans*ans;
    if(exponent&1)
    {
        ans=ans*num;
    }
    return ans;
}


int main()
{
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        ll n;
        cin>>n;
        ll counter=0;
        ll temp=n;
        while(temp>0)
        {
            counter++;
            temp=temp>>1;
        }
        //cout<<"counter "<<counter<<endl;
        ll ans= power(2,counter)-1-n;
        cout<<ans<<endl;
    }
    return 0;
}
