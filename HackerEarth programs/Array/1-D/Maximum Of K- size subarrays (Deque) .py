n,m=map(int,input().split())
l1=list(map(int,input().split()))
l=0
r=m
for i in range(m-1,len(l1)):
    print(max(l1[l:r]),end=" ")
    l+=1
    r+=1
