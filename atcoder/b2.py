def permute(s, low, high, arr):
    if low == high:
        arr.append(''.join(s))
    for i in range(low, high+1):
        s[i], s[low] = s[low], s[i]
        permute(s, low+1, high, arr)
        s[low], s[i] = s[i], s[low]



n = int(input())
A = input()
B = input()
A = A.replace(' ', '')
B = B.replace(' ', '')
arr = []
permute(list(A), 0, n-1, arr)
arr.sort()
print(abs(arr.index(A)-arr.index(B)))