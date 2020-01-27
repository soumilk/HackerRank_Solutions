s1=input()
s2=input()
count=0
for i in range(0 , len(s1)-len(s2)+1):
    if s2==s1[i:i+len(s2)]:
        count=count+1;

print(count)
