def isvowel(c):
    c = c.lower()
    return c == 'a' or c == 'i' or c == 'o' or c == 'u' or c == 'e' or c == 'y'

s = input()
s = s.lower()
c = ""
for i in range(len(s)):
    if isvowel(s[i]) == False:
        c += s[i]
ans = ""
for i in range(len(c)):
    ans += ('.' + c[i])
print(ans)