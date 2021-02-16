dominant = {'A':11, 'K':4, 'Q':3, 'J':20, 'T':10, '9':14, '8':0, '7':0};
notDominant = {'A':11, 'K':4, 'Q':3, 'J':2, 'T':10, '9':0, '8':0, '7':0};

n = list(input().split())
points = 0

for i in range(int(n[0])):
	for j in range(4):
		ip = input()
		if ip[1] == n[1]:
			points += dominant[ip[0]]
		else:
			points += notDominant[ip[0]]

print(points)