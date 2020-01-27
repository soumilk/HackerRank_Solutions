n=int(input())
l=[]
k=1
for i in range(0,n):
       o,p=map(int,input().split())
       l.append((o+p,k))
       k+=1
l.sort()
for i in range(0,n):
    print(l[i][1],end=" ")
       
