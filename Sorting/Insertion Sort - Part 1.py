n=int(input())
l=[]
l=list(map(int,input().split()))
num=l[len(l)-1]
for i in range(n-2,-1,-1):
       if l[i]>num:
              l[i+1]=l[i]
              for j in l:
                     print(j,end=" ")
              print()
       if l[i]<=num:
              l[i+1]=num
              break
       if i==0:
              l[i]=num
              break
for j in l:
       print(j,end=" ")
              
