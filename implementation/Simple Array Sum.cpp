#include <iostream>
using namespace std;

 int  summation ( int B[] , int p)
 { int s=0;
 {for ( int i=1; i<=p; i++)
         s= s+B[i];}
return s;
}
int main()
{
    int n;
    cin>> n;
    int A[n];
    for ( int i =1; i<=n; i++)
        cin>> A[i];
    int sum = summation (A, n );
    cout <<sum;
    
        return 0;
    
}
