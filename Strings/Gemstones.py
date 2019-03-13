n=int(input())
res=[]
for i in range (0,26):
       res.append(0)
#print(res)

l=[]
for i in range (0,n):
       s=input()
       s=set(s)
       l.append(s)
       for j in s:
              res[ord(j)-97]+=1
count=0
for i in res:
       if i==n:
              count+=1
print(count)
