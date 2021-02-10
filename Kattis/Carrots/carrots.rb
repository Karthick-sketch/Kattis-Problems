n, p = gets.chomp.split.map(&:to_i);
if n >= 1 and n <= 1000 and p >= 1 and p <= 1000
	n.times do
		gets;
	end
	print p;
end