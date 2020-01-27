#include<iostream>
using namespace std;

int migratory (int n)
{
	int arr[n];
	int a1=0 ,a2=0,a3=0,a4=0,a5=0,f=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for (int i=0 ;i<n;i++)
	{
		if(arr[i]==1)
		{
		a1++;}
		if(arr[i]==2)
		{
		a2++;}
		if(arr[i]==3)
		{
		a3++;}
		if(arr[i]==4)
		{
		a4++;}
		if(arr[i]==5)
		{
		a5++;}
	}
		int max=a1;
		f=1;
		if(a2>max)
		{max=a2;
		f=2;}
		if(a3>max)
		{max=a3;
		f=3;}
		if(a4>max)
		{max=a4;
		f=4;}
		if(a5>max)
		{max=a5;
		f=5;}

		return f;
	}

int main()
{
	int n ;
	cin>>n;
	int result =migratory(n);
	cout<<result;
	return 0; 
}
