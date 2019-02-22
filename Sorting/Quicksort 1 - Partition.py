n=int(input())
l=list(map(int,input().split()))
p=l[0]
left=[]
right=[]
equal=[]
for i in range (0,len(l)):
    if l[i]>p:
        right.append(l[i])
    elif l[i]<p:
        left.append(l[i])
    else:
        equal.append(l[i])
f=[]
f=left+equal+right
for i in range(0,n):
    print(f[i],end=" ")
