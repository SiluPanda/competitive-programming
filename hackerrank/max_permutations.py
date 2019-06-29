def max_perm(arr, k):
	size = len(arr)
	if size == 2:
		if arr[0] < arr[1]:
			arr[0], arr[1] = arr[1], arr[0]
		return arr
	if k >= size:
		return range(size, 0, -1)

	itr = 0
	while k > 0:
		swap_ind = arr.index(size - itr)
		if arr[itr] != arr[swap_ind]:
			arr[itr], arr[swap_ind] = arr[swap_ind], arr[itr]
			k -= 1

		itr += 1

	return arr



if __name__ == '__main__':
	nk = [int(s) for s in input().split()]
	n = nk[0]
	k = nk[1]
	arr = [int(s) for s in input().split()]

	ans = max_perm(arr, k)
	for x in ans:
		print(x, end = " ")
	print()