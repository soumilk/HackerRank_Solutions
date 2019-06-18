if __name__ == '__main__':
    l=[]
    for i in range(int(input())):
        l.append([])
        name = input()
        score = float(input())
        l[i].append(name)
        l[i].append(score)
l.sort(key = lambda x: x[1])
ind=0
for i in range(1,len(l)):
    if l[i][1]>l[0][1]:
        ind=i
        break
ans=[]
for i in range(ind,len(l)):
    if l[i][1]==l[ind][1]:
        ans.append(l[i][0])
    else:
        break
ans.sort()
for i in ans:
    print(i)


