#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int k=0;k<n;k++)
    {
    string s;
    int flag=0;
    cin>>s;
    int l=s.length();
    int i=0;
    int j=l-1;
    int diff1=0;
    int diff2=0;
    for( ; ; )
    {
        if(i>=l-1 || j<=0)
        {
            break;
        }
        if(i<l)
        {
           diff1=abs(s[i+1]-s[i]);
           i++;
        }
        if(j>0)
        {
            diff2=abs(s[j]-s[j-1]);
            j--;
        }
        if(diff1!=diff2)
        {
            cout<<"Not Funny"<<endl;
            flag=1;
            break;
        }
    }
    if (flag==0)
    cout<<"Funny"<<endl;
    }
    /*cout<<int(s[0]);
    cout<<s.length();*/
    return 0;
}
