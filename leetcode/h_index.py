def h_index(citations):
    n = len(citations)
    citations.sort(reverse = True)
    print(citations)
    if n == 0:
        return 0
    low = 0
    high = n
    while low < high:
        mid = (low + high) // 2
        print("current low is {} and high is {}".format(low, high))
        if citations[mid] >= mid+1:
            low = mid+1
            print("current citation is {} and mid is {}".format(citations[mid], mid))
        else:
            high = mid
    return low

citations = [int(s) for s in input().split()]
print(h_index(citations))
