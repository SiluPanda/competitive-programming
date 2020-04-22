def upside(n, k):
    nbin = ''
    while n > 0:
        nbin += str(n%2)
        n //= 2
    for i in range(k - len(nbin)):
        nbin += '0'
    ret = 0
    nbin = nbin[::-1]
    for i in range(k):
        ret += (int(nbin[i]) * (2**i))
    return ret

tt = int(input())
for _ in range(tt):
    ks = [s for s in input().split()]
    k, s = int(ks[0]), ks[1]
    ret = [''] * (2**k)
    for pos in range(2**k):
        newpos = upside(pos, k)
        #print(pos, newpos)
        ret[newpos] = s[pos]
    print(''.join(ret))
