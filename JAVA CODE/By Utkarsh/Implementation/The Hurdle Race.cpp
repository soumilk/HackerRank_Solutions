#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    cin>>k;
    int h[n]={0};
    int max=0;
    for(int i=0;i<n;i++)
    {
        cin>>h[i];
        if(h[i]>max)
            max=h[i];
    }
    int c=max-k;
    if(c>0)
        cout<<c;
    else
        cout<<"0";
    return 0;
}

