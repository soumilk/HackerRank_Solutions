#!/bin/python3

import math
import os
import random
import re
import sys

def bomberMan(n, grid):
    previous_previous_grid = grid 
    previous_grid = grid
    adverse_grid = [['O' for i in range(len(grid[0]))] for j in range(len(grid))]
    if n %2 == 0:
        return [''.join(i) for i in adverse_grid]
    for k in range((n-1)//2):
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if grid[i][j] == 'O':
                    adverse_grid[i][j] = '.'
                    if i!= 0:
                        adverse_grid[i-1][j] = '.'
                    else:
                        pass
                    try:
                        adverse_grid[i+1][j] = '.'
                    except:
                        pass
                    try:
                        adverse_grid[i][j+1] = '.'
                    except:
                        pass
                    if j !=0:
                        adverse_grid[i][j-1] = '.'
                    else:
                        pass
        previous_previous_grid = previous_grid
        previous_grid = grid 
        grid = [''.join(i) for i in adverse_grid]
        adverse_grid = [['O' for i in range(len(grid[0]))] for j in range(len(grid))]
        if previous_grid == grid:
            return grid
        if previous_previous_grid == grid:
            if ((n-1)//2-k)%2 == 1:
                return grid
            else:
                return previous_grid
    return grid
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    rcn = input().split()

    r = int(rcn[0])

    c = int(rcn[1])

    n = int(rcn[2])

    grid = []

    for _ in range(r):
        grid_item = input()
        grid.append(grid_item)

    result = bomberMan(n, grid)

    fptr.write('\n'.join(result))
    fptr.write('\n')

    fptr.close()
