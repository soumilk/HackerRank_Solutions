def anagram(s):
    if len(s)%2!=0:
            return -1
    else:
        s1=s[:len(s)//2]
        s2=s[len(s)//2:]
        #print(s1,s2)
        count=0
        l1=[]
        for i in range (0,26):
            l1.append(0)
        for i in s1:
            l1[ord(i)-97]+=1
        l2=[]
        for i in range (0,26):
            l2.append(0)
        for i in s2:
            l2[ord(i)-97]+=1
        for i in range(0,26):
            count+=abs(l1[i]-l2[i])
    return count//2

n=int(input())
for i in range(0,n):
       s=input()
       result =anagram(s)
       print(result)
