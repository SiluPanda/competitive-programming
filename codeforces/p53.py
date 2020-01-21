s = input()
arr = s[1:len(s)-1].split(', ')
if len(s) == 2:
    print(0)
else: print(len(set(arr)))