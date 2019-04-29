#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the biggerIsGreater function below.
def biggerIsGreater(w):
    count=0
    w=[c for c in w]
    for j in range(len(w)-1,-1,-1):
        for i in range(len(w)-1,j,-1):
            if(w[i]>w[j]):
                count=1
                w[i],w[j]=w[j],w[i]
                sarr=w[j+1:]
                sarr=sorted(sarr)
                arr=w[:j+1]
                sarr=arr+sarr
                sarr=''.join(sarr)
                break;
        if(count==1):
            break
    if(count==1):
        return sarr
    else:
         return "no answer"

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    T = int(input())

    for T_itr in range(T):
        w = input()

        result = biggerIsGreater(w)

        fptr.write(result + '\n')

    fptr.close()
