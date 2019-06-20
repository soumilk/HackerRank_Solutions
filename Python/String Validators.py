if __name__ == '__main__':
    s = input()

l = [False for i in range(5)]

for i in s:
    if i.isalnum():
        l[0] = True
    if i.isalpha():
        l[1] = True
    if i.isdigit():
        l[2] = True
    if i.islower():
        l[3] = True
    if i.isupper():
        l[4] = True

for i in l:
    print (i)
