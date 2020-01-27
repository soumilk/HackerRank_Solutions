#include<iostream>
using namespace std;

void cipher(string &s,int k)
{
	k=k%26;
    for (int i=0;i<s.length();i++)
    {
        if(int (s[i])>=97 && int(s[i])<=122-k)
        {
            s[i]=int(s[i])+k;
        }
        else if(int(s[i])>122-k && int(s[i])<=122)
        {
            s[i]=int(s[i])-(26-k);
        }
        else if(int(s[i])>=65 && int(s[i])<=90-k)
        {
            s[i]=int(s[i])+k;
        }
        else if(int(s[i]>90-k)&& int(s[i])<=90)
        {
            s[i]=int(s[i]-(26-k));
        }
    }
}
int main()
{
    string s;
    //string s1;
    int n=0;
   int k=0;
    cin>>n;
    cin>>s;
    cin>>k;
    cipher(s,k);
    
    cout<<s;
    return 0;
}
