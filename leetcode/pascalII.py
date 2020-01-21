def getRow(rowIndex):
    prev = [1]
    for i in range(1, rowIndex+1):
        curr = [0]*(i+1)
        curr[0], curr[i] = 1, 1
        for j in range(1, i):
            curr[j] = prev[j]+prev[j-1]
        prev = curr
    return prev

rowIndex = int(input())
print(getRow(rowIndex))

    
    
        
