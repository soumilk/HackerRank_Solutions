/*
* In this problem, we have found out a pattern in the occurence of each element in the xor operations
* If a number repeates even times in the array, then the XOR of the number results in 0 
*/

#include<iostream>
using namespace std;

int main(){
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int n;
        cin>>n;
        long long int x;
        long long int ans=0;
        if(n&1)
        {
            for(int i=0;i<n;i++)
            {
                cin>>x;
                if(!(i&1))
                {
                    ans=ans^x;
                }
            }
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                cin>>x;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
