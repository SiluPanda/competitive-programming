tt = int(input())
for _ in range(tt):
	l = [int(s) for s in input().split()]
	l.sort()
	print((l[0] * (l[1]-1) * (l[2]-2))%1000000007)
