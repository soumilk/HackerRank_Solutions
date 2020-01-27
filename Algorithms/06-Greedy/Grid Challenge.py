t=int(input())
for i in range (0,t):
    n=int(input())
    l=[]
    for j in range(0,n):
        entry=input()
        entry=list(entry)
        entry.sort()
        s=''
        for k in entry:
            s=s+k
        l.append(s)
# Uptil now, I have soreted the inputs of each test case, then just comparing among the different strings 
    #print(l)
    flag=0
    for i in range(0,len(l[0])):
        for j in range(0,n-1):
            if ord(l[j][i])> ord(l[j+1][i]):
                flag=1
                print("NO")
                break
        if flag==1:
            break
    if flag==0:
        print("YES")
                
