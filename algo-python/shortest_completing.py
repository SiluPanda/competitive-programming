def shortest(licensePlate, words):
    licensePlate = licensePlate.lower()
    L = dict()
    for i in range(len(licensePlate)):
        if licensePlate[i].isalpha():
            if licensePlate[i] in L:
                L[licensePlate[i]] += 1
            else:
                L[licensePlate[i]] = 1
    minl = 1000000
    ret = ''
    #print(L)
    for currword in words:
        F = dict()
        for i in range(len(currword)):
            if currword[i] in F:
                F[currword[i]] += 1
            else:
                F[currword[i]] = 1
        isgood = True
        #print(F)
        for key in L.keys():
            if (key not in F) or (L[key] > F[key]):
                isgood = False
                break
        if isgood:
            #print(currword)
            if minl > len(currword):
                minl = len(currword)
                ret = currword
    return ret

licsensePlate = input()
words = [s for s in input().split()]
print(shortest(licsensePlate, words))


