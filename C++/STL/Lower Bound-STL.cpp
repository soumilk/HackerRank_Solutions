#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    vector <int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    } 
    vector<int>:: iterator low;
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int x;
        cin>>x;
        low=lower_bound(v.begin(),v.end(),x);
        if (v[low-v.begin()]==x)
        {
            cout<<"Yes "<<(low-v.begin()+1)<<endl;
        }
        else
        {
            cout<<"No "<<(low-v.begin()+1)<<endl;
        }
    }
    
    return 0;
}
