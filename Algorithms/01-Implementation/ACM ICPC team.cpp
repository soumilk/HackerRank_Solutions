#include<iostream>
using namespace std;

int main()
{
	char **ch;
	int n,m;
	cin>>n>>m;
	ch=new char *[n];
	for(int i=0;i<n;i++)
	{
		ch[i]=new char [m];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		cin>>ch[i][j];
	
	}
	int count=0,fcount=0, max=0,l=0;
	int score[250*499]={0};
	for(int i=0;i<n;i++)
	{
		for(int k=i+1;k<n;k++)
		{
			for(int j=0;j<m;j++)
			{
				if(ch[i][j] =='1' || ch[k][j]=='1')
				count++;
			}
			score[l]=count;
			l++;
			if(count>fcount)
			{
				fcount=count;
			}
			count=0;
		}	
	}
	cout<<fcount<<endl;
	for(int i=0;i<=l;i++)
	{
	//	cout<<score[i]<<"\t";
		if(score[i]==fcount)
		max++;
	}
	for (int i=0;i<n;i++)
	{
		delete ch[i];
	}
	delete ch;
	cout<<max;
	
		return 0;
}
