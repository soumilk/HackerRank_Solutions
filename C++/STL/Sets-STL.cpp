#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
      int n;
      cin>>n;
      set<int> s;
      for(int i=0;i<n;i++)
      {
          int x,y;
          cin>>x>>y;
          if (x==1)
          {
              s.insert(y);
          }
          else if(x==2)
          {
              s.erase(y);
          }
          else{
              /*set<int>::iterator index=s.find(y);
              if (*index==y)
              {
                  cout<<"Yes"<<endl;
              }
              else
              cout<<"No"<<endl;*/
              s.find(y)==s.end() ? cout<<"No":cout<<"Yes";
              cout<<endl;
          }
      }
    return 0;
}



