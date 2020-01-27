n=int(input())
l=[]
count=0
l=list(map(int,input().split()))
for i in range(0,len(l)):
       x=l[i]
       j=i
       while j>0 and x<l[j-1]:
              l[j]=l[j-1]
              j-=1
              count+=1
       l[j]=x
print(count)
       
              
