#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    map<string,int>s;
    for(int i=0;i<n;i++)
    {
        int index,marks;
        string name;
        cin>>index;
        switch(index)
        {
            case 1:
             cin>>name>>marks;
             if(s.find(name)!=s.end())
             {
                 s[name]+=marks;
             }
             else 
             s.insert(make_pair(name,marks));
             break;
            case 2: 
            cin>>name;
            s.erase(name);
            break;
            case 3:
            cin>>name;
            s.find(name)==s.end()? cout<<0:cout<<s[name];
            cout<<endl;
            break;
        }
    }   
    return 0;
}



