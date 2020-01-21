nq = [int(s) for s in input().split()]
F = [set()]*2
for _ in range(nq[1]):
    r,c = input().split()
    r,c = int(r), int(c)
    if c in F[r-1]:
        F[r-1].remove(c)
    else:
        F[r-1].add(c)
    flag = True
    for x in F[0]:
        if x in F[1] or x+1 in F[1] or x-1 in F[1]:
            flag = False
            print("No")
            break
    if flag:
        print("Yes")

