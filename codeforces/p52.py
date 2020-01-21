nm = [int(s) for s in input().split()]
n = int(nm[0])
m = int(nm[1])
times = min(n, m)
if times&1:
    print("Akshat")
else:
    print("Malvika")