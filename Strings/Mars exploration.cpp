#include<iostream>
using namespace std;

int main()
{
    string s="SOS";
    //cout<<"Enter the input string"<<endl;
    string s1,s2;
    cin>>s1;
    int len=s1.length()/s.length();
    for (int i=0;i<len;i++){
        s2=s2+s;
    }
    int count=0;
    //cout<<"s "<<s<<"s1 "<<s1<<"s2 "<<s2<<endl;
    for (int i=0;i<s2.length();i++)
    {
        if(s1[i]!=s2[i])
        count ++;
    }
    cout<<count;
    return 0;
    
}
