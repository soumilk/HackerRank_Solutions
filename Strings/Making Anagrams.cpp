#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int anagram(string s1,string s2)
{
    int arr1[26]={0};
    int arr2[26]={0};
    for(int i=0;i<s1.length();i++)
    {
        arr1[int(s1[i])-97]+=1;
    }
    for(int i=0;i<s2.length();i++)
    {
        arr2[int(s2[i])-97]+=1;
    }
    int x=0;
    for(int i=0;i<26;i++)
    {
        if (arr1[i]!=arr2[i])
        {
            x+=abs(arr1[i]-arr2[i]);
        }
    }
    return x;
}

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int x=anagram(s1,s2);
    cout<<x;
    return 0;
}
