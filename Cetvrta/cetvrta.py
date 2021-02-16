n = list(input().split())
l1 = [int(n[0]), int(n[1])]

n = list(input().split())
l2 = [int(n[0]), int(n[1])]

n = list(input().split())
l3 = [int(n[0]), int(n[1])]

n.clear()
if l1[0] == l2[0]:
	n.append(l3[0])
elif l1[0] == l3[0]:
	n.append(l2[0])
elif l2[0] == l3[0]:
	n.append(l1[0])

if l1[1] == l2[1]:
	n.append(l3[1])
elif l1[1] == l3[1]:
	n.append(l2[1])
elif l2[1] == l3[1]:
	n.append(l1[1])

print(n[0], n[1])