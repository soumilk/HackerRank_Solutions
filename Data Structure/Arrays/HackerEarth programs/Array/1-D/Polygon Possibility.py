t=int(input())
for i in range (0,t):
    n=int(input())
    l=list(map(int,input().split()))
    l.sort()
    sum=0
    for j in range (0,n-1):
        sum+=l[j]
    if sum>l[len(l)-1]:
        print("Yes")
    else:
        print("No")
    
