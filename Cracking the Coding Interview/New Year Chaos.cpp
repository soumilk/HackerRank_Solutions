#include<iostream>
#include<vector>
using namespace std;


void compute(vector<int> arr)
{
    int swaps=0;
    for(int i=arr.size()-1;i>=0;i--)
    {
        if(arr[i]-(i+1)>2)
        {
            cout<<"Too chaotic"<<endl;
            return;
        }
        for(int j=max(0,arr[i]-2);j<i;j++)
        {
            if(arr[j]>arr[i])
            swaps+=1;
        }
    }
    cout<<swaps<<endl;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        vector<int> arr;
        for(int i=0;i<t;i++)
        {
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        compute(arr);
    }
}
