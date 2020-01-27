#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    scanf("%d",&n);
    int arr1[n];
    int arr2[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int x;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        arr2[i]=x+arr1[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr2[i]<<" ";
    }
    return 0;
}
