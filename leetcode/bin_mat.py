def get_col(matrix):
    n = len(matrix)
    if n > 0:
        m = len(matrix[0])
    min_index = m
    for i in range(n):
        low, high = 0, m-1
        while low < high:
            mid = (low + high) // 2
            if matrix[i][mid] == 0:
                low = mid+1
            else:
                high = mid
        if low == m-1:
            if matrix[i][m-1] == 1:
                min_index = min(low, min_index)
        else:
            min_index = min(low, min_index)
    if min_index == m:
        return -1
    return min_index

n = int(input())
matrix = []
for i in range(n):
    curr_row = [int(s) for s in input().split()]
    matrix.append(curr_row)
print(get_col(matrix))
    