def ok(s):
    for i in range(len(s)-1):
        if s[i] == s[i+1]:
            return False
    return True

def remove_dupli(s):
    ans = ""
    i = 0
    while i < len(s):
        if i < len(s)-1 and s[i] == s[i+1]:
            while i < len(s)-1 and s[i] == s[i+1]:
                i += 1
        else:
            ans += s[i]
            i += 1
    return ans

tt = int(input())
for _ in range(tt):
    s = input()
    ans = remove_dupli(s)
    while ok(ans) == False:
        ans = ok(ans)
    print(ans)