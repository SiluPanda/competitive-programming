def minCost(A):
    n = len(A)
    dp = [0]*n
    dp[0] = A[0]
    dp[1] = A[1]
    for i in range(2, n):
        dp[i] = A[i] + min(dp[i-1], dp[i-2])
    return min(dp[n-1], dp[n-2])

A = [int(s) for s in input().split()]
print(minCost(A))

