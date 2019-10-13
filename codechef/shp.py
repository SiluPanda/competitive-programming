tt = int(input())
for _ in range(tt):
    nk = [int(s) for s in input().split()]
    n = nk[0]
    k = nk[1]
    arr = [int(s) for s in input().split()]
    for i in range(k):
        mod = i&(n-1)
        arr[mod] ^= arr[n-mod-1]
    for i in range(len(arr)):
        print(arr[i], end = " ")
    print()
        


        
