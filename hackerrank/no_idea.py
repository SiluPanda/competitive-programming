nm = input().split()
arr = input().split()
A = set(input().split())
B = set(input().split())

print(sum([(ele in A) - (ele in B) for ele in arr]))