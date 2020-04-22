def count_say(n):
    def getnum(num):
        ret = ''
        n = len(num)
        i = 0
        last = num[0]
        currf = 0
        while True:
            if i == n:
                ret += (str(currf) + last)
                break
            if num[i] == last:
                currf += 1
            else:
                ret += (str(currf) + (last))
                currf = 1
                last = num[i]
            i += 1
        return ret
    dp = ['1']
    for i in range(1, n):
        dp.append(getnum(dp[i-1]))
    return dp[n-1]

print(count_say(5))