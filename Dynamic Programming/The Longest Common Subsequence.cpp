#include<iostream>
#include<vector>
using namespace std;

void solvelcs(int n,int m, int A[],int B[])
{
    // 2-D DP array
    int dp[m+1][n+1];

    // Making the initial row and column zero
    for(int i=0; i<=n;i++) dp[0][i]=0;
    for(int i=0;i<=m;i++) dp[i][0]=0;

    // Making up the dp array with subsequence count upto i and j index
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if (B[i]==A[j])
            {
                dp[i][j]=1+dp[i-1][j-1];
            }
            else
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    
    // Print out the generated dp array 
    
    /*for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }*/
    
    int max_common_len=dp[m][n];
    int temp=max_common_len;
    vector <int> ans;
    int i=m;int j=n;
    while(i>0 && j>0)
    {
        if(A[j]==B[i])
        {
            ans.push_back(B[i]);
            --i;
            --j;
            --max_common_len;
        }
        else if(dp[i][j-1]<dp[i-1][j])
        {
            --i;
        }
        else
        j--;
    }
    // This is one of the longest common subsequence among two sequences  
    for(int i=temp-1;i>=0;i--)
    {
        cout<<ans[i]<<" ";
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    int A[n+1]={0};
    int B[m+1]={0};
    for(int i=1;i<=n;i++) cin>>A[i];
    for(int i=1;i<=m;i++) cin>>B[i];
    solvelcs(n,m,A,B);
    //cout<<s;
    return 0;
}
