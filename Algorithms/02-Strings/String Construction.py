n=int(input())
for i in range(0,n):
    s1=input()
    s2=s1[0]
    count=1
    for j in range(1,len(s1)):
        if s1[j] not in s2:
            s2+=s1[j]
            count+=1
        else:
            s2+=s1[j]
    print(count)
