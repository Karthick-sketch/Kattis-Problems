n = gets.to_i;
if n >= 1 and n <= 100 then
	arr = []
	n.times do
		x, y = gets.chomp.split.map(&:to_f);
		if x > 0 and x <= 1 and y > 0 and y <= 100 then
			arr.push(x * y);
		end
	end
end

print arr.sum