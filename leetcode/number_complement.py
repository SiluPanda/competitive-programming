def num_complement(num):
    ret = []
    while num > 0:
        if num&1 == 1:
            ret.append(0)
        else:
            ret.append(1)
        num >>= 1
    ans = 0
    for i in range(len(ret)):
        ans += ret[i] * (2 ** i)
    return ans

num = int(input())
print(num_complement(num))