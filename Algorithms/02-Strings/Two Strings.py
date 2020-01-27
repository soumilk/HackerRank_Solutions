#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the twoStrings function below.
def twoStrings(s1, s2):
    l1=[]
    for i in range(0,26):
        l1.append(0)
    l2=l1[:]
    for i in s1:
        l1[ord(i)-97]+=1
    for i in s2:
        l2[ord(i)-97]+=1
    for i in range(0,26):
        if l1[i]>0 and l2[i]>0:
            return 'YES'
    return 'NO'

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input())

    for q_itr in range(q):
        s1 = input()

        s2 = input()

        result = twoStrings(s1, s2)

        fptr.write(result + '\n')

    fptr.close()
