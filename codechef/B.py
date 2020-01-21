from math import sqrt

tt = int(input())
for _ in range(tt):
    inp = [int(s) for s in input().split()]
    diff = abs(inp[0]-inp[1])
    F = set()
    for i in range(1, int(sqrt(diff))+1):
        if diff%i == 0:
            F.add(diff//i)
            F.add(i)
    print(len(F))




