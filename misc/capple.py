tt = int(input())
for _ in range(tt):
    n = int(input())
    arr = [int(s) for s in input().split()]
    print(len(set(arr)))