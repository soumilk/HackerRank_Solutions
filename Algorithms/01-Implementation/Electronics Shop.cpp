#include<iostream>
using namespace std;

int main()
{
	int s,mo,kb,m=0;
	cin>>s>>kb>>mo;
	int keyboard[kb] ;
    int mouse[mo];
	for (int i=0;i<kb;i++)
	{
		cin>>keyboard[i];
	}
	
	for (int i=0;i<mo;i++)
	{
		cin>>mouse[i];
	}
	
	int t;
    t= 0;
	for( int i=0;i <kb;i++)
    {	 
		for(int j=0;j<mo;j++)
    	{
    		
            m = keyboard [i] + mouse [j];
    		if (t <= m && m <= s && t<=s)
    		  t = m ;
		}
	}
    
	if(t==0)
	{
		cout<<"-1";
	}else
	cout<< t;
	return 0;	
}
