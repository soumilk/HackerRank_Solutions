#include<iostream>
using namespace std;
#define ll long long unsigned

/*
All we need to do in this problem is to usee the bitwise not 
it will flip all the bits of the number. It is to note that we need to use the type unsigned int 
*/
int main()
{
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        unsigned int n;
        cin>>n;
        unsigned int tmp=~n;
        cout<<tmp<<endl;
    }
    return 0;
}
