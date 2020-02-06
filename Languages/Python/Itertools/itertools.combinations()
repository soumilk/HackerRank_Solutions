# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import combinations

a,b=input().split()
b=int(b)
l=[]
a=sorted(a)
for i in range (0,b):
    l=l+list(combinations(a,i+1))
for i in l:
    s=''
    for j in i:
        s=s+j
    print(s)
