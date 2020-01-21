def level(arr):
    if 1 in arr:
        print("hard")
    else:
        print("easy")
n = int(input())
arr = [int(s) for s in input().split()]
level(arr)