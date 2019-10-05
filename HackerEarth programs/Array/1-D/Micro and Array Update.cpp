#include<iostream>
#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
 
int main()
{
    int n;
    scanf("%d",&n);
    int x1,x2;
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&x1,&x2);
        int num;
        int arr[x1+1];
        int min=INT_MAX;
        for(int j=0;j<x1;j++)
        {
            scanf("%d",&num);
            if (num<min)
            {
                min=num;
            }
            
        }
        if (min<x2)
        {
            int xxx=x2-min;
            printf("%d\n",xxx);
        }
        else
        printf("0\n");
    }
    return 0;
}
