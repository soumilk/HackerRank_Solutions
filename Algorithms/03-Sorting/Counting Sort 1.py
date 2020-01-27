n=int(input())
l=[]
l=list(map(int,input().split()))
m=max(l)
res=[0]*(m+1)
for i in range(0,len(l)):
    res[l[i]]+=1
for i in res:
    print(i,end=" ")
