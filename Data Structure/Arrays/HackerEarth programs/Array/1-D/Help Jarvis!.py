n=int(input())
for i in range (0,n):
    s=input()
    s=list(map(int,s))
    s.sort()
    x=s[0]
    flag=0
    for j in range(1,len(s)):
        if s[j]!=x+1:
            print("NO")
            flag=1
            break
        x=s[j]
    if flag==0:
        print("YES")
    
