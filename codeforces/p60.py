nm = [int(s) for s in input().split()]
n = nm[0]
m = nm[1]
arr = []
l = [int(s) for s in input().split()]
arr.extend(l)
maxi = -100000
arr.sort()
for i in range(1, len(arr)):
    maxi = max(maxi, arr[i]-arr[i-1])
print(max([maxi/2, arr[0]-0, m-arr[-1]]))
