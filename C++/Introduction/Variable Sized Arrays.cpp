#include<iostream>
using namespace std;

int main()
{
	int **arr,row,col,query,p,q;
	cin>>row>>query;
	arr=new int *[row];
	for(int i=0;i<row;i++)
	{
		cin>>col;
		arr[i]=new int[col];
		for(int j=0; j<col;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<query;i++)
	{
		cin>>p>>q;
		cout<<arr[p][q]<<endl;
	}
	return 0;
}
