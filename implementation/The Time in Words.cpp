#include<bits/stdc++.h>
using namespace std;
string s[]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven",
"twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty","twenty one",
"twenty two","twenty three","twenty four","twenty five","twenty six","twenty seven","twenty eight","twenty nine"};

int main() {
int h,m; 
cin>>h>>m; 
if(m==0) 
cout<<s[h]<<" o' clock"<<endl; 
else if(m==1)
{
    cout<<s[m]<<" minute past "<<s[h]<<endl;
}
else if(m==30) cout<<"half past "<<s[h]<<endl; 
else if(m==15) cout<<"quarter past "<<s[h]<<endl; 
else if(m==45) cout<<"quarter to "<<s[h+1]<<endl; 
else if(m<30) cout<<s[m]<<" minutes past "<<s[h]<<endl; 
else cout<<s[60-m]<<" minutes to "<<s[h+1]<<endl; 
return 0;
}

