#include<iostream>
#include<stdio.h>
using namespace std;
 
int main()
{
    int n=1001;
    int arr[n]={0};
    int t;
    scanf("%d",&t);
    int num;
    for(int i=0;i<t;i++)
    {
        scanf("%d",&num);
        arr[num]+=1;
    }
    int q;
    scanf("%d",&q);
    int xx;
    for(int i=0;i<q;i++)
    {
        scanf("%d",&xx);
        if (arr[xx]==0)
        {
            printf("NOT PRESENT\n");
        }
        else
        printf("%d\n",arr[xx]);
    }
    return 0;
}
