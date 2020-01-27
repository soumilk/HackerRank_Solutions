from itertools import combinations
n=int(input())
s=input()
s1=set(s)
s1=list(s1)
s2=s
l1=[]
for i in s1:
       l1.append(s.count(i))
#print(l1)
for i in range(0,len(l1)-1):
       for j in range(i+1,len(l1)):
              if l1[j]>l1[i]:
                     temp1=l1[j]
                     l1[j]=l1[i]
                     l1[i]=temp1
                     temp2=s1[j]
                     s1[j]=s1[i]
                     s1[i]=temp2
comb=combinations(s1,2)
#print(l1)
#print(s1)
count=0
for i in comb:
       flag=0
       s2=s
       #print (i)
       #print(i[1])
       for j in s:
              if j!=i[0] and j!=i[1]:
                     s2=s2.replace(j,"")
                     #print(s2)
       for k in range(0,len(s2)-1):
              if s2[k]==s2[k+1]:
                     flag=1
                     break
       if(len(s2)>count and flag==0):
              count=len(s2)
print(count)
