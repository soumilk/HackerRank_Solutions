n=int(input())
for l in range(0,n):
       N,p,q,r=list(map(int,input().split()))
       l=[0]*(N+1)
       #print(N,p,q,r)
       for i in [p,q,r]:
              #print(i)
              mul=i
              count=1
              while mul<=N:
                     #print("count ",count, " mul ",mul)
                     if l[mul]==0:
                            l[mul]=1
                     else:
                            l[mul]=2
                     count+=1
                     mul=i*count
       #print(l)
       
       print(l.count(1))
    
