s=input()
s2=''
for i in range (len(s)):
    s1=s[i]
    if ord(s[i])<=122 and ord(s[i])>=97 :
        s1= chr(ord(s[i])-32)

    if ord(s[i])>=65 and ord(s[i])<=90:
        s1=chr(ord(s[i])+32)
    
    s2=s2+s1    

print(s2)
