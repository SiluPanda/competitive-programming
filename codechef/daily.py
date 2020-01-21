def ncr(n, r):
    p, q = 1, 1
    for i in range(n-r+1, n+1):
        p *= i
    for i in range(1, r+1):
        q *= i
    return p//q

n, m = input().split()
n = int(n)
m = int(m)
ans = 0
for _ in range(m):
    s = input()
    arr = [0]*9
    for i in range(len(s)):
        ind = 0
        if i+1 <= 36:
            ind = (i+4)//4
        else:
            ind = 9 - (i-36)//2
        if s[i] == '1':
            arr[ind-1] += 1
    for x in arr:
        #print("x is {}, n is {} and ncr is {}".format(x,n,ncr(x,n)))
        ans += ncr(6-x, n)
print(ans)
            
