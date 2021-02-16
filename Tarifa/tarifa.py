gb = int(input())
if gb >= 1 and gb <= 100:
	month = int(input())
	if month >= 1 and month <= 100:
		tot = 0
		for i in range(month):
			p = int(input())
			tot = (gb+tot)-p

		tot += gb
		print(tot)