#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int parameter=arr[n-1];
    vector <int> arr1;
    arr1.push_back(parameter);
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>=parameter)
        {
            arr1.push_back(arr[i]);
            parameter=arr[i];
        }
    }
    for(int i=arr1.size()-1;i>=0;i--)
    {
        cout<<arr1[i]<<" ";
    }
    return 0;
}
