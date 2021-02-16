arr = [[], [], [], []] ;
for i in range(len(arr)):
	lst = list(input().split());
	arr[i].append(int(lst[0]));
	arr[i].append(int(lst[1]));
	arr[i].append(int(lst[2]));
	arr[i].append(int(lst[3]));

pos = int(input());

if pos == 0:
	for i in range(len(arr)):
		for j in range(len(arr)):
			if arr[i][2] == 0:
				arr[i][2], arr[i][3] = arr[i][3], arr[i][2];
			if arr[i][1] == 0:
				arr[i][1], arr[i][2] = arr[i][2], arr[i][1];
			if arr[i][0] == 0:
				arr[i][0], arr[i][1] = arr[i][1], arr[i][0];

		if arr[i][0] != 0 and arr[i][1] != 0 and arr[i][0] == arr[i][1]:
			arr[i][0] *= 2;
			arr[i][1] = arr[i][2];
			arr[i][2] = arr[i][3];
			arr[i][3] = 0;
			if arr[i][0] != 0 and arr[i][1] != 0 and arr[i][2] == arr[i][1]:
				arr[i][1] *= 2;
				arr[i][2] = arr[i][3];
				arr[i][3] = 0;
		elif arr[i][1] != 0 and arr[i][2] != 0 and arr[i][1] == arr[i][2]:
			arr[i][1] *= 2;
			arr[i][2] = arr[i][3];
			arr[i][3] = 0;
		elif arr[i][2] != 0 and arr[i][3] != 0 and arr[i][2] == arr[i][3]:
			arr[i][2] *= 2;
			arr[i][3] = 0;

elif pos == 1:
	for i in range(len(arr)):
		for j in range(len(arr)):
			if arr[2][i] == 0:
				arr[2][i], arr[3][i] = arr[3][i], arr[2][i];
			if arr[1][i] == 0:
				arr[1][i], arr[2][i] = arr[2][i], arr[1][i];
			if arr[0][i] == 0:
				arr[0][i], arr[1][i] = arr[1][i], arr[0][i];

		if arr[0][i] != 0 and arr[1][i] != 0 and arr[0][i] == arr[1][i]:
			arr[0][i] *= 2;
			arr[1][i] = arr[2][i];
			arr[2][i] = arr[3][i];
			arr[3][i] = 0;
			if arr[2][i] != 0 and arr[1][i] != 0 and arr[2][i] == arr[1][i]:
				arr[1][i] *= 2;
				arr[2][i] = arr[3][i];
				arr[3][i] = 0;
		elif arr[1][i] != 0 and arr[2][i] != 0 and arr[1][i] == arr[2][i]:
			arr[1][i] *= 2;
			arr[2][i] = arr[3][i];
			arr[3][i] = 0;
		elif arr[2][i] != 0 and arr[3][i] != 0 and arr[2][i] == arr[3][i]:
			arr[2][i] *= 2;
			arr[3][i] = 0;

elif pos == 2:
	for i in range(len(arr)):
		for j in range(len(arr)):
			if arr[i][1] == 0:
				arr[i][0], arr[i][1] = arr[i][1], arr[i][0];
			if arr[i][2] == 0:
				arr[i][1], arr[i][2] = arr[i][2], arr[i][1];
			if arr[i][3] == 0:
				arr[i][3], arr[i][2] = arr[i][2], arr[i][3];

		if arr[i][2] != 0 and arr[i][3] != 0 and arr[i][2] == arr[i][3]:
			arr[i][3] *= 2;
			arr[i][2] = arr[i][1];
			arr[i][1] = arr[i][0];
			arr[i][0] = 0;
			if arr[i][1] != 0 and arr[i][2] != 0 and arr[i][1] == arr[i][2]:
				arr[i][2] *= 2;
				arr[i][1] = arr[i][0];
				arr[i][0] = 0;
		elif arr[i][1] != 0 and arr[i][2] != 0 and arr[i][1] == arr[i][2]:
			arr[i][2] *= 2;
			arr[i][1] = arr[i][0];
			arr[i][0] = 0;
		elif arr[i][1] != 0 and arr[i][0] != 0 and arr[i][1] == arr[i][0]:
			arr[i][1] *= 2;
			arr[i][0] = 0;

elif pos == 3:
	for i in range(len(arr)):
		for j in range(len(arr)):
			if arr[1][i] == 0:
				arr[1][i], arr[0][i] = arr[0][i], arr[1][i];
			if arr[2][i] == 0:
				arr[1][i], arr[2][i] = arr[2][i], arr[1][i];
			if arr[3][i] == 0:
				arr[2][i], arr[3][i] = arr[3][i], arr[2][i];

		if arr[3][i] != 0 and arr[3][i] == arr[2][i]:
			arr[3][i] *= 2;
			arr[2][i] = arr[1][i];
			arr[1][i] = arr[0][i];
			arr[0][i] = 0;
			if arr[2][i] != 0 and arr[2][i] == arr[1][i]:
				arr[2][i] *= 2;
				arr[1][i] = arr[0][i];
				arr[0][i] = 0;
		elif arr[2][i] != 0 and arr[1][i] == arr[2][i]:
			arr[2][i] *= 2;
			arr[1][i] = arr[0][i];
			arr[0][i] = 0;
		elif arr[1][i] != 0 and arr[1][i] == arr[0][i]:
			arr[1][i] *= 2;
			arr[0][i] = 0;

for i in range(len(arr)):
	for j in range(len(arr)):
		print(arr[i][j], end = '');
		if j < 3:
			print(" ", end = '');
	if i < 3:
		print();