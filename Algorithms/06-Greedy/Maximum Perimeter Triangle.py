n=int(input())
l=[]
l=list(map(int,input().split()))
l.sort()
temp=0
flag=0
for i in range (n-1,1,-1):
    temp=l[i]
    if l[i-1]+l[i-2] > temp:
        #ans=[l[i-2],l[i-1],l[i]]
        flag=1
        print(l[i-2],l[i-1],l[i])
        break
        
if flag==0:
    print(-1)
