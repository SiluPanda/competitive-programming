tc=int(input())
for _ in range(tc):
    n = int(input())
    dire = []
    roads = []
    s = input()
    tmp = list(s.split(" "))
    roads.append(" ".join(tmp[2:]))
    for i in range(n-1):
        s = input()
        words = list(s.split(" "))
        if words[0] == "Left":
            dire.append("Right")
        elif words[0] == "Right":
            dire.append("Left")
        
        roads.append(" ".join(words[2:]))
    print("Begin on {}".format(roads[n-1]))
    for i in range(n-2, -1, -1):
        print("{} on {}".format(dire[i], roads[i]))



    