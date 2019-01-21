#include<iostream>
using namespace std;

int main()
{
    string s="hackerrank";
    int n;
    cin>>n;
    string s1;
    for (int i=0;i<n;i++)
    {
        cin>>s1;
        int count=0;
        int val=0;
        for(int j=0;j<s.length();j++)
        {
            for(int k=val;k<s1.length();k++)
            {
                if(s[j]==s1[k])
                {
                    val=k+1;
                    count++;
                    break;
                }
            }
        }
        if(count!=s.length())
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
