// This is the Dynamic solution to the problem of hackerrank, 
// https://www.hackerrank.com/challenges/coin-change/submissions/code/137673556 
/*
* Basically we are given a certain amount and total number of differnt coins, we need to find out the 
differnt way by which we can sum up the amount by using those coins
*/
// THIS IS THE Dynamic Bottom Up APPROACH TO THE SOLUTION

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long getWays(int n, vector<long> c) {
    long int dp[n+1]={0};         // THIS IS THE ARRAY THAT STORES THE WAYS OF EACH NUMBER TILL AMOUNT
    dp[0]=1;
    for (int i=0;i<c.size();i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<c[i])
            continue;

            dp[j]+=dp[j-c[i]];
        }
    }
    return dp[n];
}

int main()
{
    int amount,types;
    cin>>amount>>types;
    vector <int> c;
    for(int i=0;i<types;i++)
    {
        int temp;
        cin>>temp;
        c.push_back(temp);
    }
    long int ans=coins(amount,c);
    cout<<ans<<endl;
    return 0;
}
