arr = [[], [], [], []] ;
for i in 0...arr.size
	arr[i][0], arr[i][1], arr[i][2], arr[i][3] = gets.chomp.split.map(&:to_i);
end
		
pos = gets.to_i;

if pos == 0 then
	for i in 0...arr.size
		for j in 0...arr.size
			if arr[i][2] == 0 then
				arr[i][2], arr[i][3] = arr[i][3], arr[i][2];
			end
			if arr[i][1] == 0 then
				arr[i][1], arr[i][2] = arr[i][2], arr[i][1];
			end
			if arr[i][0] == 0 then
				arr[i][0], arr[i][1] = arr[i][1], arr[i][0];
			end
		end
		if arr[i][0] != 0 and arr[i][1] != 0 and arr[i][0] == arr[i][1] then
			arr[i][0] *= 2;
			arr[i][1] = arr[i][2];
			arr[i][2] = arr[i][3];
			arr[i][3] = 0;
			if arr[i][0] != 0 and arr[i][1] != 0 and arr[i][2] == arr[i][1] then
				arr[i][1] *= 2;
				arr[i][2] = arr[i][3];
				arr[i][3] = 0;
			end
		elsif arr[i][1] != 0 and arr[i][2] != 0 and arr[i][1] == arr[i][2] then
			arr[i][1] *= 2;
			arr[i][2] = arr[i][3];
			arr[i][3] = 0;
		elsif arr[i][2] != 0 and arr[i][3] != 0 and arr[i][2] == arr[i][3] then
			arr[i][2] *= 2;
			arr[i][3] = 0;
		end
	end
elsif pos == 1 then
	for i in 0...arr.size
		for j in 0...arr.size
			if arr[2][i] == 0 then
				arr[2][i], arr[3][i] = arr[3][i], arr[2][i];
			end
			if arr[1][i] == 0 then
				arr[1][i], arr[2][i] = arr[2][i], arr[1][i];
			end
			if arr[0][i] == 0 then
				arr[0][i], arr[1][i] = arr[1][i], arr[0][i];
			end
		end
		if arr[0][i] != 0 and arr[1][i] != 0 and arr[0][i] == arr[1][i] then
			arr[0][i] *= 2;
			arr[1][i] = arr[2][i];
			arr[2][i] = arr[3][i];
			arr[3][i] = 0;
			if arr[2][i] != 0 and arr[1][i] != 0 and arr[2][i] == arr[1][i] then
				arr[1][i] *= 2;
				arr[2][i] = arr[3][i];
				arr[3][i] = 0;
			end
		elsif arr[1][i] != 0 and arr[2][i] != 0 and arr[1][i] == arr[2][i] then
			arr[1][i] *= 2;
			arr[2][i] = arr[3][i];
			arr[3][i] = 0;
		elsif arr[2][i] != 0 and arr[3][i] != 0 and arr[2][i] == arr[3][i] then
			arr[2][i] *= 2;
			arr[3][i] = 0;
		end
	end
elsif pos == 2 then
	for i in 0...arr.size
		for j in 0...arr.size
			if arr[i][1] == 0 then
				arr[i][0], arr[i][1] = arr[i][1], arr[i][0];
			end
			if arr[i][2] == 0 then
				arr[i][1], arr[i][2] = arr[i][2], arr[i][1];
			end
			if arr[i][3] == 0 then
				arr[i][3], arr[i][2] = arr[i][2], arr[i][3];
			end
		end
		if arr[i][2] != 0 and arr[i][3] != 0 and arr[i][2] == arr[i][3] then
			arr[i][3] *= 2;
			arr[i][2] = arr[i][1];
			arr[i][1] = arr[i][0];
			arr[i][0] = 0;
			if arr[i][1] != 0 and arr[i][2] != 0 and arr[i][1] == arr[i][2] then
				arr[i][2] *= 2;
				arr[i][1] = arr[i][0];
				arr[i][0] = 0;
			end
		elsif arr[i][1] != 0 and arr[i][2] != 0 and arr[i][1] == arr[i][2] then
			arr[i][2] *= 2;
			arr[i][1] = arr[i][0];
			arr[i][0] = 0;
		elsif arr[i][1] != 0 and arr[i][0] != 0 and arr[i][1] == arr[i][0] then
			arr[i][1] *= 2;
			arr[i][0] = 0;
		end
	end
elsif pos == 3 then
	for i in 0...arr.size
		for j in 0...arr.size
			if arr[1][i] == 0 then
				arr[1][i], arr[0][i] = arr[0][i], arr[1][i];
			end
			if arr[2][i] == 0 then
				arr[1][i], arr[2][i] = arr[2][i], arr[1][i];
			end
			if arr[3][i] == 0 then
				arr[2][i], arr[3][i] = arr[3][i], arr[2][i];
			end
		end
		if arr[3][i] != 0 and arr[3][i] == arr[2][i] then
			arr[3][i] *= 2;
			arr[2][i] = arr[1][i];
			arr[1][i] = arr[0][i];
			arr[0][i] = 0;
			if arr[2][i] != 0 and arr[2][i] == arr[1][i] then
				arr[2][i] *= 2;
				arr[1][i] = arr[0][i];
				arr[0][i] = 0;
			end
		elsif arr[2][i] != 0 and arr[1][i] == arr[2][i] then
			arr[2][i] *= 2;
			arr[1][i] = arr[0][i];
			arr[0][i] = 0;
		elsif arr[1][i] != 0 and arr[1][i] == arr[0][i] then
			arr[1][i] *= 2;
			arr[0][i] = 0;
		end
	end
end

for i in 0...arr.size
	for j in 0...arr.size
		print arr[i][j];
		if j < 3
			print " ";
		end
	end
	if i < 3
		puts;
	end
end