#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the icecreamParlor function below.
def icecreamParlor(m, arr):
    ans = []   
    for i in range(0,len(arr)):
        num = m-arr[i]
        if (num==arr[i]) and (num in arr[i+1:]):
            for j in range(i+1,len(arr)):
                if arr[j]==num:
                    ans = [i+1]+[j+1]
                    break
        elif num in arr[i+1:]:
            ans = [i+1]+[arr.index(num)+1]
            break
    ans.sort()
    return(ans)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        m = int(input())

        n = int(input())

        arr = list(map(int, input().rstrip().split()))

        result = icecreamParlor(m, arr)

        fptr.write(' '.join(map(str, result)))
        fptr.write('\n')

    fptr.close()
