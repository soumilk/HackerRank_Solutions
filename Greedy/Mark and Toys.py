n,k=map(int,input().split())
l=[]
l=list(map(int,input().split()))
l.sort()
sum=0
i=0
while sum<=k:
    sum+=l[i]
    i+=1
print(i-1)
