def fact(num)
	if num == 1
		return num
	else
		return num * fact(num-1)
	end
end

n = gets.to_i
arr = []
for i in 1..n
	arr.push(fact(gets.to_i))
end

for i in 0...n
	val = arr[i].to_s
	puts val[val.size-1]
end
