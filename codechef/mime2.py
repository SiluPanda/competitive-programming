nm = [int(s) for s in input().split()]
n, m = nm[0], nm[1]
F = dict()
for _ in range(n):
    inp = [s for s in input().split()]
    F[inp[0]] = inp[1]
for _ in range(m):
    filename = input()
    i = len(filename)-1
    ext = ''
    found = False
    while i >= 0:
        if filename[i] == '.':
            found = True
            break
        ext += filename[i]
        i -= 1
    ext = ext[::-1]
    if found and ext in F:
        print(F[ext])
    else:
        print('unknown')


