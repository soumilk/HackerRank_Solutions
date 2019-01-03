#include<iostream>
using namespace std;

int main()
{
    string s="abcdefghijklmnopqrstuvwxyz";
    string s1;
    getline(cin,s1);
    int count=0;
    //cout<<s1<<endl;
    for (int i=0;i<s.length();i++)
    {
        for(int j=0;j<s1.length();j++)
        {
             if (int(s1[j])<=90 && int(s1[j])>=65)
                s1[j]=char(int(s1[j])+32);
            if (int(s1[j])==32)
                continue;
            if (s[i]==s1[j])
            {
                count ++;
                break;
            }
        }
    }
    ///cout<<count<<endl;
    if (count==26)
    {
        cout<<"pangram";
    }
    else 
    {
        cout<<"not pangram";
    }
    return 0;
}
