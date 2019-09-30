tt = int(input())
for _ in range(tt):
    s = input()
    un = {}
    for i in range(len(s)):
        un[s[i]] = False
    i = 0
    while i < len(s):
        if un[s[i]] == False:
            print(s[i], end = '')
            un[s[i]] = True
        i += 1