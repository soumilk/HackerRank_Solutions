#include<iostream>
using namespace std;
int main()
{
 
int n;
cin>>n;
int a[n];
 
for(int i=0;i<n;i++)
cin>>a[i];
 
int prev=a[0];
 
int flag=0;
for(int i=1;i<n;i++)
{
 
int cur=a[i];
 
int diff=cur-prev;
if(cur>=prev)
{
a[i]=diff;
a[i-1]=0;
prev=a[i];
}
else
{
flag=1;
break;
}
 
}
 
if(a[n-1]!=0)
flag=1;
 
if(flag==0)
cout<<"YES";
else
cout<<"NO";
 
return 0;
}
