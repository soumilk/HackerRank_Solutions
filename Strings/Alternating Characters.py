n=int(input())
for i in range (0,n):
    s=input()
    x=s[0]
    count=0
    for j in range(1,len(s)):
        if s[j]==x:
            count+=1
        else:
            x=s[j]
    print(count)

        
