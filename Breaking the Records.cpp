#include<iostream>
using namespace std;

int main()
{
    int n, countb=0,countl=0;
    cin>>n;
    int arr[n];
    for (int i=0; i<n;i++ )
    {
        cin>>arr[i];
    }
    int b=arr[0]; int l=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>b)
        {
            countb++;
            b=arr[i];
        }
        if(arr[i]<l)
        {
            countl++;
            l=arr[i];
        }
    }
    cout<<countb<<" "<<countl;
    return 0;
}
