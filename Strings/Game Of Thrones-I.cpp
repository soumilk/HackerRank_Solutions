#include<iostream>
using namespace std;

void solution (string s)
{
    int arr[26]={0};
    for(int i=0;i<s.size();i++)
    {
        arr[int(s[i])-'a']++;
    }
    int count=0;
    for(int i=0;i<26;i++)
    {
        if(arr[i] % 2==1)
        {
            count++;
        }
    }
    if(count>1)
    {
        cout<<"NO";
    }else
    cout<<"YES";
}
int main()
{
    string s;
    cin>>s;
    solution(s);
    return 0;
}

