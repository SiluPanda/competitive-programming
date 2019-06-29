def gcd(a, b):
	if b == 0:
		return a
	return gcd(b, a%b)

def max_gcd(a, n):
	a.sort(reverse  = True)
	if n == 2:
		return a[0] + a[1]
	if a[0] == a[n-1]:
		return a[0] + a[n-1]
	g = a[2]
	for i in range(3, n):
		g = gcd(g, a[i])
	return max([gcd(g, a[1]) + a[0] , gcd(g, a[0]), a[1]])

if __name__ == '__main__':
	t = int(input())
	for _ in range(t):
		n = int(input())
		a = [int(s) for s in input().split()]
		print(max_gcd(a,n))
