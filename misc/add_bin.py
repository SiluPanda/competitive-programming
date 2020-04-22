def add(A, B):
    if len(A) < len(B):
        A, B = B, A
    B = (len(A)-len(B))*'0' + B
    ret = ''
    carry = 0
    A, B = A[::-1], B[::-1]
    for i in range(len(A)):
        add = int(A[i]) + int(B[i]) + carry
        ret += str(add%2)
        carry = add//2
    if carry != 0:
        ret += str(carry)
    return ret[::-1]

A = input()
B = input()
print(type(A), type(B))
print(add(A, B))

        