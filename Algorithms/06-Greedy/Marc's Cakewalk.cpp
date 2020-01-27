#include <cmath>
#include<bits/stdc++.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    long int ans=0;
    cin >> n;
    int A[n];
    for(int i=0;i<n;i++){
        cin >> A[i];
    }   

    sort(A,A+n,greater<int>());
    for(int i=0;i<n;i++){
        ans+=pow(2,i)*A[i];
    }
    cout << ans;
    return 0;
}
