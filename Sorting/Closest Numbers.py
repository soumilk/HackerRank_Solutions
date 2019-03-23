n=int(input())
arr=list(map(int,input().split()))
arr.sort()
#print(arr)
max=abs(arr[0]-arr[1])
res=[(arr[0],arr[1])]
for i in range(1,len(arr)-1):
       if abs(arr[i]-arr[i+1])<max:
              max=abs(arr[i]-arr[i+1])
              res.clear()
              res.append((arr[i],arr[i+1]))
       elif abs(arr[i]-arr[i+1])==max:
              res.append((arr[i],arr[i+1]))
       else:
              continue
for i in range(0,len(res)):
       print(res[i][0],res[i][1],end=' ')
