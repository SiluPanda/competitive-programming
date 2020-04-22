def overlap(A, B):
    return not ((A[0] >= B[1]) or (A[1] <= B[0]))

def min_num(arr, dep):
    n = len(arr)
    i,j = 1,0
    mini, need = 1,1
    arr.sort()
    dep.sort()
    while i < n and j < n:
        if arr[i] < dep[j]:
            need += 1
            i += 1
            mini = max(mini, need)
        else:
            need -= 1
            j += 1
    return mini

def solve():
    tt = int(input())
    for t in range(1, tt+1):
        n = int(input())
        arr = []
        dep = []
        A = []
        for i in range(n):
            ad = [int(s) for s in input().split()]
            a,d = ad[0],ad[1]
            arr.append(a)
            dep.append(d)
            A.append([a, i])
            A.append([d, i])
        if min_num(arr, dep) > 2:
            print("Case #{}: IMPOSSIBLE".format(t))
        else:
            A.sort(key = lambda x : x[0])
            ans = ['#' for x in range(n)]
            curr = -1
            i = 0
            while i < 2*n:
                if A[i][1] == curr:
                    ans[curr] = 'J'
                    curr = -1
                elif curr == -1:
                    curr = A[i][1]
                i += 1
            for i in range(n):
                if ans[i] == '#':
                    ans[i] = 'C'
            print("Case #{}: {}".format(t, ''.join(ans)))
        
solve()


        
