hn = [int(s) for s in input().split()]
h = hn[0]
arr = [int(s) for s in input().split()]
if sum(arr) >= h:
    print("Yes")
else:
    print("No")