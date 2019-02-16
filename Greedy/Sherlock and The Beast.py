n=int(input())
for i in range (0,n):
    temp=int(input())
    flag=0
    i=0
    while temp>0:
        if (temp-i*5)<0:
            break
        if (temp-i*5)%3==0:
            s=temp-i*5
            print("5"*s+"3"*(temp-s))
            flag=1
            break
        i+=1
    if flag==0:
        print(-1)

