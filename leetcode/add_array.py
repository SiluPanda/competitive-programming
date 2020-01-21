def addToArrayForm(A, K):
    ret = []
    A.reverse()
    n = len(A)
    K = str(K)
    maxi = max(n, len(K))
    for i in range(maxi-n):
        A.append(0)
    K = K[::-1]
    for i in range(maxi-len(K)):
        K += '0'
    carry = 0
    for i in range(len(K)):
        add = carry + int(K[i]) + A[i]
        ret.append(add%10)
        carry = add//10
    if carry != 0:
        ret.append(carry)
    ret.reverse()
    return ret

A = [int(s) for s in input().split()]
K = int(input())
print(addToArrayForm(A, K))


    
