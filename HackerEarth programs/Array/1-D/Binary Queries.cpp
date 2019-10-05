#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
 
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    vector <int> arr(n+1);
    for (int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int ini_digit;
    int X;
    int L,R;
    for (int i=0;i<m;i++)
    {
        scanf("%d",&ini_digit);
        if (ini_digit==1)
        {
            scanf("%d",&X);
            if (arr[X]==0)
            {
                arr[X]=1;
            }
            else arr[X]=0;
        }
        
        else
        {
            scanf("%d %d",&L,&R);
            if (arr[R]==1)
            {
                printf("ODD\n");
            }
            else
            printf("EVEN\n");
        }
    }
    return 0;
}
