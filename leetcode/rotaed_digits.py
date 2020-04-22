def rotated(N):
    notgood = [3, 4, 7]
    good = [2, 5, 6, 9]
    ret  = 0
    for i in range(1, N+1):
        num = i
        isgood = 0
        while num > 0:
            digit = num%10
            if digit in notgood:
                isgood = 0
                break
            if digit in good:
                isgood += 1
            num //= 10
        if isgood > 0:
            ret += 1
    return ret

N = int(input())
print(rotated(N))