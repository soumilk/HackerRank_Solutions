#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int j = 0; j < t; ++j)
    {
    int n,k,temp1,temp2,flag=0;
    cin  >>  n >> k;
    int a[n+1]={0};
    for(int i=1;i<n+1;i++){
        temp1=i-k;
        temp2=i+k;
        if(temp1>=1 && temp1<=n && a[temp1]==0){
            a[temp1]=i;
        }
        else if(temp2>=1 && temp2<=n && a[temp2]==0){
            a[temp2]=i;
        }
        else {
            flag=1;
            break;
        }
    }
        if(flag == 1){cout << -1 << endl;}
        else {
            for(int i=1;i<n+1;i++){
                if(a[i]>0)cout<<a[i]<<" ";
            }
            cout << endl;
        }
        
    }

    return 0;
}
