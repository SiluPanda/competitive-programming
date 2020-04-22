def longest(A):
    F = dict()
    for x in A:
        for i in range(1, len(x)+1):
            if x[:i] in F:
                F[x[:i]] += 1
            else:
                F[x[:i]] = 1
    ret = ''
    maxi = -1
    #print(F)
    for key in F.keys():
        if F[key] >= len(A) and len(key) > maxi:
            maxi = len(key)
            ret = key
    return ret


A = [s for s in input().split()]
print(longest(A))