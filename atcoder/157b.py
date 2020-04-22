grid = []
F = dict()
for i in range(3):
    row = [int(s) for s in input().split()]
    for j in range(3):
        F[row[j]] = [i, j]
    grid.append(row)
N = int(input())
for i in range(N):
    num = int(input())
    if num in F:
        grid[F[num][0]][F[num][1]] = -1

found = False
for i in range(3):
    if grid[i][0] == -1 and grid[i][1] == -1 and grid[i][2] == -1:
        print("Yes")
        found = True
        break
if not found:
    for j in range(3):
        if grid[0][j] == -1 and grid[1][j] == -1 and grid[2][j] == -1:
            print("Yes")
            found = True
            break
if not found:
    if grid[0][0] == -1 and grid[1][1] == -1 and grid[2][2] == -1:
        print("Yes")
        found = True
if not found:
    if grid[0][2] == -1 and grid[1][1] == -1 and grid[2][0] == -1:
        print("Yes")
        found = True
if not found:
    print("No")
