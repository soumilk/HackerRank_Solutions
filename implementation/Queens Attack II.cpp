#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int queensAttack (int n,int k,int rq,int cq,vector<tuple<int,int> >obstacles)
{
    //cout<<get<0>(obstacles[0]);
    int u=n-rq;
    int d=rq-1;
    int r=n-cq;
    int l=cq-1;
    int ru=min(r,u);
    int rd=min(r,d);
    int lu=min(l,u);
    int ld=min(l,d);
    for(int i=0;i<k;i++)
    {
        if (get<1>(obstacles[i])==cq)
        {
            if (get<0>(obstacles[i])>rq)
            {
                u=min(u,get<0>(obstacles[i])-rq-1);
            }
            else{
                d=min(d,rq-1-get<0>(obstacles[i]));
            }
        }
        else if(get<0>(obstacles[i])==rq)
        {
            if (get<1>(obstacles[i])>cq)
            {
                r=min(r,get<1>(obstacles[i])-cq-1);
            }
            else{
                l=min(l,cq-get<1>(obstacles[i])-1);
            }
        }
        else if (abs(get<0>(obstacles[i])-rq)==abs(get<1>(obstacles[i])-cq))
        {
            if(get<1>(obstacles[i])>cq)
            {
                if (get<0>(obstacles[i])>rq)
                {
                    ru=min(ru,get<1>(obstacles[i])-cq-1);
                }else{
                    rd=min(rd,get<1>(obstacles[i])-cq-1);
                }
            }else{
                if(get<0>(obstacles[i])>rq)
                {
                    lu=min(lu,cq-1-get<1>(obstacles[i]));
                    
                }else{
                    ld=min(ld,cq-1-get<1>(obstacles[i]));
                }
            }
        }
    }
        int sum=r+u+d+l+ru+rd+lu+ld;
        return sum;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int rq,cq;
    cin>>rq>>cq;
    vector<tuple<int,int>> obstacles;
    for (int i=0;i<k;i++)
    {
        int obsr,obsc;
        cin>>obsr>>obsc;
        obstacles.push_back(make_tuple(obsr,obsc));
    }
    int result =queensAttack(n,k,rq,cq,obstacles);
    cout<<result;
    return 0;
}
