#include <iostream>
#include <map>
#include<vector>
using namespace std;

int solve (int n,int m)
{
    int lor= n^m;
    int count =0;
    while(lor>0) {
        count++;
        lor = lor >> 1;
    }
    int temp=1;
    int max=0;
    while(count>0)
    {
        max+=temp;
        temp=temp<<1;
        count--;
    }
    return max;
}

int main()
{
    int n,m;
    cin>>n>>m;
    int max=solve(n,m);
    cout<<max;
    return 0;
}
