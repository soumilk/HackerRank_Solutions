// This is the Recursive solution to the problem of hackerrank, 
/*
* Basically we are given a certain amount and total number of differnt coins, we need to find out the 
differnt way by which we can sum up the amount by using those coins
*/
// THIS IS THE RECURSIVE APPROACH TO THE SOLUTION

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int num=0;    /// THIS IS THE GLOBAL VARIALE TO KEEP THE COUNT OF THE POSSIBLE WAYS TO THE SUM UP THE AMOUNT

void coins(int sum, int arr[],int amount,int types,int k)
{
    if(sum==amount)   // THIS IS THE BASE CASE, WHEN THE SUM IS EQUAL TO THE AMOUNT, THEN INCREMENT THE WAY
    {
        num++;
        return;    
    }    
    if(sum>amount)    // IF THE SUM EXCEEDS THE AMOUNT THEN THAT IS NOT THE VALID WAY, RETURN 
    {
        return;
    }
    
    // HERE WWE ARE CHECKING EACH COMBINAITON OF THE COINS, ADDING UP THE COINS OF DIFFERENT TYPES, 
    // WE HAVE TAKEN A PARAMETER 'K' TO AVOID THE PRMUTATIONS OF THE SAME COINS.
    
    for(int i=k;i<types;i++)  
    {
        coins(sum+arr[i],arr,amount,types,k);
        k++;    
    }
    
    return ;
}

int main()
{
    int amount,types;
    cin>>amount>>types;
    int arr[types]={0};
    for(int i=0;i<types;i++)
    {
        cin>>arr[i];
    }
    coins(0,arr,amount,types,0);
    cout<<num<<endl;
    return 0;
}
