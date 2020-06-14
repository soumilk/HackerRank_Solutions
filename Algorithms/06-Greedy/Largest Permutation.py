def largestPermutation(k, arr):
    d ={}
    upper = len(arr)
    for j in range(len(arr)):
        d[arr[j]] = j
    i = 0
    counter = 0
    while counter < k:
        if arr[d[upper]] != arr[i]:
            arr[d[upper]] = arr[i]
            d[arr[i]] = d[upper]
            arr[i] = upper
            counter += 1
        i += 1
        if i == len(arr):
            break
        upper -= 1
    return arr 
