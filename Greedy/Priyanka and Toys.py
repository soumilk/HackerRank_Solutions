n=int(input())
l=[]
l=list(map(int,input().split()))
l.sort()
#print(l)
container=1
lim=l[0]+4
i=1
while i<len(l):
       if l[i]>lim:
              lim=l[i]+4
              container+=1
       i+=1
print(container)
