#include<iostream>
using namespace std;
int main()
{
	int n,a,count=0,work;
	cin>>n;
	int lboard[n]={0};
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(!i)
		{
			lboard[count]=a;
			count++;
		}
		else if(lboard[count-1]==a)
			continue;
		else 
		{
			lboard[count]=a;
			count++;
		}
	}
		int q;
	cin>>q;
	int score[q];
	for(int i=0;i<q;i++)
	{
		cin>>score[i];
	}
	int i=0,t=count-1;
	while(i<q){
        work=0;
        for(int j=t;j>=0;j--){
            if(score[i]<lboard[j]){t=j;
                                  work=1;
                                 break;}
            }
       if(work==1){
        printf("%d\n",t+2);}
        else{printf("1\n");}
        i++;
    }
	return 0;
}