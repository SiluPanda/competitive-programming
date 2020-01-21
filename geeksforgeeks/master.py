def gcd(x,y):
    while(y):
        x,y = y,x%y
    return x

def twosum(tup1, tup2):
    n1 = tup1[0]
    d1 = tup1[1]
    n2 = tup2[0]
    d2 = tup2[1]

    lcm = (d1*d2)/gcd(d1,d2)
    ans = [0,0]
    ans[0] = (lcm/d1)*n1 + (lcm/d2)*n2
    ans[1] = lcm
    ans[0] = ans[0]/gcd(ans[0], ans[1])
    ans[1] = ans[1]/gcd(ans[0], ans[1])
    return ans
    
def getsum(arr):
    ans = arr[0]
    for i in range(1, len(arr)):
        ans = twosum(ans,arr[i])
    return ans

A = [1]
L = [[1,1]]
for i in range(10):
    A.append(getsum(L)[0]*getsum(L)[1])
    print(A)
    L.append([1, A[-1]])
print(getsum([[1, 1], [1, 1], [1, 2.0], [1, 10.0]]))


