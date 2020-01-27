n=int(input())
l=[]
for x in range(0,n):
    s=input()
    i=0
    j=len(s)-1
    opr=0
    if len(s)%2!=0:
        while i!=j:
            opr+= abs(ord(s[i])-ord(s[j]))
            i+=1
            j-=1
    else:
        while i!=len(s)//2:
            opr+= abs(ord(s[i])-ord(s[j]))
            i+=1
            j-=1
    print(opr)

