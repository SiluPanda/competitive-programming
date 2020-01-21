nm = [int(s) for s in input().split()]
n = nm[0]
m = nm[1]
A = "#"*m
direction = 1
for i in range(n):
    if i&1:
        if direction == 1:
            print("."*(m-1)+"#")
        else:
            print("#" + "."*(m-1))
        direction = -direction
    else:
        print(A)

        