tt = int(input())
for _ in range(tt):
    inp = [int(s) for s in input().split()]
    n,k,ans = inp[0],inp[1],inp[2]
    arr = [int(s) for s in input().split()]
    ac = input()
    ac = ac.replace(' ', '')
    if ac[0] == 'X':
        if k%2 != 0:
            for x in arr:
                ans = ans^x
    elif ac[0] == 'O':
        if k > 0:
            for x in arr:
                ans = ans|x
    else:
        if k > 0:
            for x in arr:
                ans = ans&x
    print(ans)