n=int(input())
k=int(input())
l=[]
l=list(map(int,input().split()))
for i in range(0,len(l)):
    if l[i]==n:
        print(i)
        break
