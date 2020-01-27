n=int(input())
l=[]
l=list(map(int,input().split()))
for i in range(0,len(l)):
       x=l[i]
       j=i
       while j>0 and x<l[j-1]:
              l[j]=l[j-1]
              j-=1
       l[j]=x
for i in range(0,len(l)):
    print(l[i],end=" ")
       
              
