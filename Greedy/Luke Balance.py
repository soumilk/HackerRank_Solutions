n,k=map(int,input().split())
l=[]
for i in range(0,n):
       l.append(list(map(int,input().split())))

l.sort()
count=0
luck=0
j=0
for i in range(0,len(l)):
    if l[i][1]==1:
        count+=1
    if count>k:
        while l[j][1]==0:
            j+=1
        luck=luck-2*l[j][0]
        j+=1
        count-=1

    luck=luck+l[i][0];

print(luck)
