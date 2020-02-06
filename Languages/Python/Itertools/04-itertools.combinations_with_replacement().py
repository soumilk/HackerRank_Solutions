# Enter your code here. Read input from STDIN. Print output to STDOUT
from itertools import combinations_with_replacement

a,b=input().split()
b=int(b)
a=sorted(a)
l=list(combinations_with_replacement(a,b));
for i in l:
    s=''
    for j in i:
        s=s+j
    print(s)
