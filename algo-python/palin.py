def isPalin(A):
    B = ''
    A = A.lower()
    for i in range(len(A)):
        if A[i].isalpha() or A[i].isdigit():
            B += A[i]
    #print(B)
    if B == B[::-1]:
        return 1
    return 0

A = input()
print(isPalin(A))
    