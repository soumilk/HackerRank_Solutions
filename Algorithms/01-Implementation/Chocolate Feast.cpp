#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
        long m;
		int c,ec,w,choc,p=0;
		cin>>m>>c>>ec;
		w=m/c;
		choc=w;
		while(w>=ec)
		{
			choc=choc+w/ec;
			p=w%ec;
			w=w/ec+p;
		}
		cout<<choc<<endl;
	}
	return 0;
}
