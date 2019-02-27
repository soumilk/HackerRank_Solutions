#include<iostream>
#include<vector>
using namespace std;

string check(string s, int n)
{
    vector<char>color;
    vector<int>count;
    for(int i=0;i<n;i++){
        int f1=0;
        for(int j=0;j<color.size();j++)
        {
            if(s[i]==color[j])
            {
                count[j]++;
                f1=1;
            }
        }
        if(f1==0){
        color.push_back(s[i]);
        count.push_back(1);
        }
    }
    int q=0;
    int flag=0;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
        {
            q++;
            continue;
        }
        else if(q>=1)
        {
            q=0;
            continue;
        }
        else{
            flag=1;
            break;
        }
    }
    int test=0;
    if(flag ==1)
    {
        for(int i=0;i<color.size();i++)
        {
            if(color[i]!='_' && count[i]==1)
            {
                return "NO";
            }
            else if(color[i]=='_')
            {
                test=1;
            }
            
        }
        if(test==1)
        return "YES";
        return "NO";
    }
    else if(flag==0)
    {
        for(int i=0;i<color.size();i++)
        {
            if(color[i]!='_' && count[i]==1)
            return "NO";
        }
        return "YES";    
    }
    return "bvbviabv";
}
int main()
{
    int g;
    cin>>g;
    for(int i=0;i<g;i++)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        cout<<check(s,n)<<endl;
    }
    return 0;
}
