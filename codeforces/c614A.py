def find(arr, l, h, x):
    while l <= h:
        mid = (l+h)//2
        if arr[mid] == x:
            return mid
        elif arr[mid] < x:
            l = mid+1
        else:
            h = mid-1
    return -1

tt = int(input())
for _ in range(tt):
    inp = [int(s) for s in input().split()]
    n,s,k = inp[0], inp[1], inp[2]
    closed = [int(s) for s in input().split()]
    closed.sort()
    if s not in closed:
        print(0)
    else:
        up = s+1
        while up <= n and find(closed, 0, len(closed)-1, up) != -1:
            up += 1
        down = s-1
        while down >= 1 and find(closed, 0, len(closed)-1, down) != -1:
            down -= 1
        #print("up is {} and down is {}".format(up, down))
        if down == 0:
            print(up-s)
        elif up == len(closed):
            print(s-down)
        else:
            print(min(up-s, s-down))
    