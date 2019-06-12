n,m=map(int,input().split())
l=list(map(int,input().split()))
if m%n==0:
       for i in range(0,len(l)):
              print(l[i],end=" ")
else:
       index=m%n
       i=index
       while True:
              print(l[i],end=" ")
              if i==len(l)-1:
                     i=0
                     continue
              i+=1
              if i==index:
                     break
              
              
