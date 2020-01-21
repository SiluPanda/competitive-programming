def numTrees(n):
    A = 1
    for i in range(1, n+2):
        A *= i
    B = 1
    for i in range(n+1, 2*n+1):
        B *= i
    return B//A

n = int(input())
print(numTrees(n))