#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
#include<cstdio>
//#include<unorderd_map>
using namespace std;
#define Max_Size 30000
void display(unordered_map<string,int>umap)
{
    unordered_map<string,int>::iterator itr;
    for(itr=umap.begin();itr!=umap.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    cout<<endl;
}
string compute(string &mag, string & replica)
{
    string word;
    //cout<<mag<<endl;
    //cout<<replica<<endl;
    stringstream ssmag(mag);
    stringstream ssreplica(replica);
    unordered_map<string,int> umapmag;
    unordered_map<string,int> umapreplica;
    while(ssmag>>word)
    {
        umapmag[word]++;
    }
    while(ssreplica>>word)
    {
        if (umapmag[word]==0)
        {
            return "No";
        }
        else{
            umapmag[word]-=1;
        }
    }
    return "Yes";
}
int main()
{
    int n,m;
    cin>>m>>n;
    string mag;
    string replica;
    cin.ignore();
    getline(cin,mag);
    
    
    getline(cin,replica);
    cout<<compute(mag,replica);
    return 0;
}
