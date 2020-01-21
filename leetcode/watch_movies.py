def getfriends(friends, id, level):
    friend = friends[id]
    while level > 1:
        ret = []
        for x in friend:
            ret.extend(friends[x])
        friend = ret
        level -= 1
    return list(set(friend))

def watch(videos, friends, id, level):
    inds = getfriends(friends, id, level)
    ans = []
    for x in inds:
        if x != id:
            ans.extend(videos[x])
    d = {}
    for x in ans:
        if x not in d.keys():
            d[x] = 1
        else:
            d[x] += 1
    p = sorted(d.items(), key = lambda kv:(kv[1], kv[0]))
    ret = []
    print(p)
    for x in p:
        ret.append(x[0])
    return ret
videos = []
friends = []
n = int(input())
for _ in range(n):
    arr = [s for s in input().split()]
    videos.append(arr)
for _ in range(n):
    arr = [int(s) for s in input().split()]
    friends.append(arr)
id = int(input())
level = int(input())
print(watch(videos, friends, id, level))
        



