ret = [0]*1025
ret[0] = 0
ret[1] = 1
for i in range(2,1025):
    ret[i] = ret[i-1]+ret[i-2]
print(ret[1024])