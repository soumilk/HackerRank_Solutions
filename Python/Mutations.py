s=input()
n=list(input().split())
n1=int(n[0])
s= s[:int(n1)]+ n[1] + s[int(n1+1):]
print(s)
