t=int(input())
for i in range (0,t):
    n,m=map(int,input().split())
    l1=list(map(int,input().split()))
    l2=list(map(int,input().split()))
    l2max=max(l2)+1
    ans=0
    for j in l1:
        if j<l2max:
            ans+=(l2max-j)*m
    print(ans)
