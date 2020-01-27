n=int(input())
cp=list(map(int,input().split()))
ideal=list(map(int,input().split()))
counter=0
for i in range(0,n):
       if cp[0]==ideal[0]:
              counter+=1
              cp.pop(0)
              ideal.pop(0)
       else:
              #print("cp[0]: ",cp[0],"  ideal[0]: ",ideal[0])
              diff=cp.index(ideal[0])
              counter+=diff
              #print("diff: ",diff)
              arr=[None]*len(cp)
              for j in range (0,len(cp)):
                     indi=j-diff
                     if indi<0:
                            indi+=len(cp)
                     arr[indi]=cp[j]
                     #print("arr :",arr)
              cp=arr[:]
              counter+=1
              cp.pop(0)
              ideal.pop(0)
              
       #print("counter: ",counter)
       #print(" cp  ",cp)
       #print("ideal ",ideal)
print(counter)
      
