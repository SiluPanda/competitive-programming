def longest_word(s, d):
    def isgood(A, B):
        i = 0
        j = 0
        lena = len(A)
        lenb = len(B)
        while i < lena:
            if j < lenb and A[i] == B[j]:
                j += 1
            i += 1
        return j == lenb


    d.sort(key = lambda x : len(x), reverse = True)
    ret = ''
    for x in d:
        if isgood(s, x):
            if len(ret) == 0:
                ret = x
            else:
                if len(ret) == len(x):
                    if x < ret:
                        ret = x

    return ret
    
s = input()
d = [s for s in input().split()]
print(longest_word(s, d))

