nk = [int(s) for s in input().split()]
n, k = nk[0], nk[1]
tot = 0
all_sums = [0]
for i in range(1, 200001):
    all_sums.append(i+all_sums[-1])
for i in range(k, n+1):
    tot = (tot + (all_sums[n]-all_sums[n-i]) - (all_sums[i-1]) + 1)%1000000007
print(tot+1)