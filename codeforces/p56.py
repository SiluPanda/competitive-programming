n = int(input())
s = input()
s = s.lower()
arr = [0]*26
for i in range(len(s)):
    arr[ord(s[i])-97] = 1
flag = False
for x in arr:
    if x == 0:
        print("NO")
        flag = True
        break
if flag == False:
    print("YES")
