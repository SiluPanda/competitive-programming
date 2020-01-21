n = int(input())
for _ in range(n):
    s = input()
    s = s.lower()
    arr = [False]*26
    for i in range(len(s)):
        if ord(s[i])-97 >= 0 and ord(s[i])-97 < 26:
            arr[ord(s[i])-97] = True
    found = False
    for i in range(26):
        if arr[i] == False:
            print(chr(i+97))
            found = True
            break

    if found == False:
        print('~')