#include<iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        int n, m;
        cin>>n>>m;
        int max=0;
        int count=0;
        int x=0;
        for(int j=0;j<n;j++)
        {
            cin>>x;
            if (x>max)
            {
                max=x;
                count+=1;
            }
        }
        cout<<count*m<<endl;
        
    }
    return 0;
}
