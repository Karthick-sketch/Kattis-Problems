n = int(input())
if n >= 1 and n <= 100:
	arr = []
	for i in range(n):
		lst = list(input().split())
		x, y = float(lst[0]), float(lst[1])
		if x > 0 and x <= 1 and y > 0 and y <= 100:
			arr.append(x * y)

	print(sum(arr))