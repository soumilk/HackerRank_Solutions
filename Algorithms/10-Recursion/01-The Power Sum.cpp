#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int  counter=0;   // Global variable to count the ways

// This is the function to count the number of ways
void total_ways(int k,int sum,int power, int number)
{
    // Base Case
    if (sum==number)
    {
        counter++;
        return ;
    }
    if (sum>number)
    return ;
    
    // Recursive case 
    for(int i=k;pow(i,power)<=number;i++)
    {
        sum+=pow(i,power);
        total_ways(i+1,sum,power,number);
        sum-=pow(i,power);        // Backtracking Step 
    }
    return ;
}

int main()
{
    int n;
    int power;
    cin>>n>>power;
    total_ways(1,0,power,n);
    cout<<counter<<endl;
    return 0;
}
