def fact(num):
	if num == 1:
		return num
	else:
		return num * fact(num-1)


n = int(input())
lst = []
for i in range(n):
	lst.append(fact(int(input())))

for i in lst:
	i = str(i)
	print(i[len(i)-1])
