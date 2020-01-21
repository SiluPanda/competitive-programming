tt = int(input())
for _ in range(tt):
    n = int(input())
    scores = [int(s) for s in input().split()]
    owner = list(range(1, n+1))
    q = int(input())
    for qq in range(q):
        inp = [int(s) for s in input().split()]
        if inp[0] == 1:
            print(owner[inp[1]-1])
        else:
            if owner[inp[1]-1] == owner[inp[2]-1]:
                print("Invalid query!")
            elif scores[inp[1]-1] > scores[inp[2]-1]:
                owner[inp[2]-1] = owner[inp[1]-1]
            elif scores[inp[1]-1] < scores[inp[2]-1]:
                owner[inp[1]-1] = owner[inp[2]-1]
            else:
                pass
            
