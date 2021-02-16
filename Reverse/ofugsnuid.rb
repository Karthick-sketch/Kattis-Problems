n = gets.to_i;
arr = Array.new(n);
for i in 0...n
	arr[i] = gets.to_i;
end
arr.reverse!;
for i in 0...n
	puts arr[i];
end
