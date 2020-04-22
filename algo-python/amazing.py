def solve(A):
    def isVowel(c):
        c = c.lower()
        return c == 'a' or c == 'o' or c == 'i' or c == 'u' or c == 'e'

    ans = 0
    for i in range(len(A)):
        if isVowel(A[i]):
            ans = (ans + len(A)-i) % 10003
    return ans

A = input()
print(solve(A))