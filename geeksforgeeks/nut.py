def help(d, c):
    for i in range(d[c]):
        print(c, end = '')

tt = int(input())

for _ in range(tt):
    n = int(input())
    s = input()
    dup = input()
    l = s.split(' ')
    d = {}
    order = "!#$%&*@^~"
    for i in range(len(order)):
        d[order[i]] = 0
    for i in range(len(l)):
        d[l[i]]+=1
    for i in range(len(order)):
        help(d, order[i])
    print()
    