#include <iostream>
using namespace std;

int main()
{
	int n;
	
	cin>> n ;
	int marks[61];
	
	for ( int i = 0 ; i<n ; i ++)
	{
		cin >> marks[i];
	}
	
	for ( int i=0 ; i<n ; i++)
	{
		if ( marks [i]< 38)
		{
			cout << marks[i]<<endl;
		}
		else if ( 38<=marks[i] <=100 )
		{
			int t = (marks[i]/5 +1)*5 ;
			if ( t - marks[i]<3)
			cout <<t<<endl ;
			else cout << marks[i]<<endl;
		}
	}
	return 0;
}
