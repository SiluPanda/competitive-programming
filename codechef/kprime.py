from math import sqrt

prime = [True]*100001
prime[0] = False
prime[1] = False
for i in range(2,1001):
    if prime[i]:
        for p in range(i*i, 100001, i):
            prime[p] = False

tt = int(input())
for _ in range(tt):
    inp = [int(s) for s in input().split()]
    ans = 0
    for i in range(inp[0], inp[1]+1):
        F = set()
        for num in range(1,int(sqrt(i))+1):
            if i%num == 0:
                if prime[num]:
                    F.add(num)
                if prime[i//num]:
                    F.add(i//num)
        #print(F)
        if len(F) == inp[2]: ans += 1
    print(ans)
