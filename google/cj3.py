import math

def isprime(n):
	if n == 1:
		return False
	elif n == 2 or n == 3:
		return True
	else:
		p = int(math.sqrt(n))
		for i in range(2, p+1):
			if n % i == 0:
				return False

	return True

def prime_factor(n, max_range):
	
	l = []
	for i in range(2, max_range + 1):
		if n % i == 0 and isprime(i) == True:
			l.append(int(n/i))
			l.append(int(i))
			break

	return l

t = int(input())
for q in range(t):
	inp1 = [int(s) for s in input().split()]
	n = inp1[0]
	max_l = inp1[1]

	all_nums = []
	arr = [int(s) for s in input().split()]
	all_nums.extend(prime_factor(arr[0], n))
	for i in range(1, max_l):
		if arr[i] % all_nums[-1] == 0:
			all_nums.append(int(arr[i] / all_nums[-1]))

		elif arr[i] % all_nums[-2] == 0:
			T = int(arr[i] / all_nums[-2])

			all_nums[-1], all_nums[-2] = all_nums[-2], all_nums[-1]
			all_nums.append(T)

	dup = all_nums
	dup = sorted(set(all_nums))
	d = {}
	m = 65
	for i in range(len(dup)):
		d[dup[i]] = m
		m += 1

	maxi_loop = len(all_nums)
	mystr = ""
	for i in range(maxi_loop):
		mystr += chr(d[all_nums[i]])

	print("Case #{}: {}".format(q+1, mystr))

