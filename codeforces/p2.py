from math import ceil
inp = [int(s) for s in input().split()]
n = inp[0]
m = inp[1]
a = inp[2]
print(int(ceil(n/a)*ceil(m/a)))