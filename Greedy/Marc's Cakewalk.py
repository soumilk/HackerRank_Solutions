n=int(input())
l=[]
l=list(map(int,input().split()))
l.sort(reverse=True)
cost=0 
j=0
for i in l:
    cost=cost+(2**j)*i;
    j=j+1
print(cost)
