#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
void encryption(string s)
{
    vector <string> ans;
    int l=s.length();
    double root =sqrt(l);
    int f=floor(root);
    int c=ceil(root);
    if(f*c<l)
        ++f;
        int i=0;
        int j=i;
        string s1="\0";
        while(i<c)
        {
            s1="\0";
            while(i<l)
            {
                s1=s1+s[i];
                i=i+c;
            }
            if(s1!="\0")
            ans.push_back(s1);
            i=++j;
        }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}
int main()
{
    string s;
    cin>>s;
    encryption(s);
    return 0;
}
