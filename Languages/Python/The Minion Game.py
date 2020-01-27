
def minion_game(string):
    length=len(string)
    v=[]
    c=[]
    for i in range(length):
        if(string[i]=='A'or string[i]=='E'or string[i]=='I'or string[i]=='O'or string[i]=='U'):
            v.append(i)
        else:
            c.append(i)

    vscore=len(v)
    cscore=len(c)
    
    for i in v:
        vscore+=length-1-i

    for i in c:
        cscore+=length-1-i

    if(vscore>cscore):
        print("Kevin",vscore)
    elif (vscore<cscore):
        print("Stuart",cscore)
    else:
        print("Draw")
            


if __name__ == '__main__':
    s = input()
    minion_game(s)
