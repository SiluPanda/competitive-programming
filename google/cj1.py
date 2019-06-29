def nums(s):
	n = len(s)
	p = ""
	q = ""
	for i in range(n):
		if s[i] == '4':
			p += '3'
			q += '1'
		else:
			p += s[i]
			q += '0'

	return [int(p) , int(q)]

t = int(input())
for q in range(t):
	s = input()
	l = nums(s)
	print("Case #{}: {} {}".format(q+1, l[0], l[1]))
	

