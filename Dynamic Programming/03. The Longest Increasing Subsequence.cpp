#include <bits/stdc++.h>

using namespace std;

// Complete the longestIncreasingSubsequence function below.
int longestIncreasingSubsequence(vector<int> arr) {
    int n=arr.size();
    int dp[n]={1};
    int best=-1;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if (arr[i]>=arr[j])
            {
                int temp=dp[j]+1;
                dp[i]=max(dp[i],temp);
            }
        }
        best=max(best,dp[i]);
    }
    return best;
}
