def doit(word):
    ans = ""
    for i in range(len(word)):
        if (i+1)%2 == 0:
            ans += word[i].upper()
        else:
            ans += word[i].lower()
    return ans

word = input()
print(doit(word))