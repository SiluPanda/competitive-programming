def find_path(s):
	n = len(s)
	p = ""
	for i in range(n):
		if s[i] == 'E':
			p += 'S'
		else:
			p += 'E'
	return p

t = int(input())
for q in range(t):
	l = int(input())
	s = input()
	print("Case #{}: {}".format(q+1, find_path(s)))
