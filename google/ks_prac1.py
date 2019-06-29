def getplayer(arr, n, k):
	sorted(arr)
	start_index = 0
	min_c = 10000000000
	for i in range(n-k+1):
		max_iter = i+k-1
		cost = 0
		for j in range(i, max_iter+1):
			cost = cost + arr[max_iter] - arr[j]
		if cost < min_c:
			min_c = cost
		if min_c == 0:
			break

			
			
	return min_c
	
if __name__ == '__main__':
	t = int(input())
	for q in range(1,t+1):
		nk = [int(s) for s in input().split()]
		n = nk[0]
		k = nk[1]
		arr = [int(s) for s in input().split()]
		answer = getplayer(arr, n, k)
		print("Case #{}: {}".format(q, answer))

	
	
		
		
	