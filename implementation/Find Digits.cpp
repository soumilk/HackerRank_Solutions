#include<iostream>
using namespace std;

int findDigits( int t)
{
	int o=t;
	int count=0;
	for( ; ; )
	{
		if(t==0)
		break;
		int p = t%10;
		t=t/10;
		if(p==0)
		continue;
		if(o%p==0)
		count ++;
	}
	return count ;
}
int main()
 {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        int result = findDigits(t);
        cout << result << endl;
    }
    return 0;
}
