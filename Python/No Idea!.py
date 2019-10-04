# Enter your code here. Read input from STDIN. Print output to STDOUT
n,m = [int(x) for x in input().split(" ")]

t=[int(k) for k in input().split(" ")]
u=set(int(k) for k in input().split(" "))
v=set(int(k) for k in input().split(" "))

pos=0
neg=0

print (sum([(i in u) - (i in v) for i in t]))





