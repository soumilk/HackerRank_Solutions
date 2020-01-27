/** here in am trying to solve a problem of hackerank */
#include <iostream>
using namespace std;

string kangroo ( int x1 , int v1, int x2, int v2)
{   for ( int i=1 ;i<10000; i++)
    {   if ( x1 + i*v1 == x2 + i*v2 )
        return "YES";
    }

        return "NO";
    }



int main()
{   int x1,v1,x2,v2;

    cin>> x1 >>v1>> x2 >>v2 ;
    string result = kangroo( x1,v1,x2,v2 );
    cout << result ;
    return 0;

}
