def solve (A,N):
    # Write your code here
    param=(2**N)//2
    sum=0
    for i in range(0,N):
        if A[i]>=param:
            sum+=A[i]
    return sum%1000000007
    
 
T = int(input())
for _ in range(T):
    N = int(input())
    A = list(map(int, input().split()))
 
    out_ = solve(A,N)
    print (out_)
