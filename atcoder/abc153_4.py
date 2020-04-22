import math

h = int(input())
len = int(math.log2(h) + 1)
ans = 1<<len
print(ans-1)