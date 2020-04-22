def diff(h1, m1, h2, m2):
    if h1 == h2:
        return m2-m1
    else:
        return (h2-1-h1)*60 + 60-m1 + m2

tt = int(input())
for _ in range(tt):
    h1, m1 = input().split(':')
    h2, m2 = input().split(':')
    h1, m1, h2, m2 = int(h1), int(m1), int(h2), int(m2)
    dist = int(input())
    diff_time = diff(h2, m2, h1, m1)
    time1 = diff_time + dist
    time2 = 0
    p = diff_time // dist
    if p >= 2:
        time2 = diff_time
    else:
        time2 = diff_time + (2 * dist - diff_time)/2
    print ('%.1f'%time1, end=' ')
    print ('%.1f'%time2)  
