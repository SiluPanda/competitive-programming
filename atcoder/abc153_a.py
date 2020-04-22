ha = [int(s) for s in input().split()]
h, a = ha[0], ha[1]
if h%a == 0:
    print(h//a)
else:
    print(h//a + 1)