dominant = {'A'=>11, 'K'=>4, 'Q'=>3, 'J'=>20, 'T'=>10, '9'=>14, '8'=>0, '7'=>0};
notDominant = {'A'=>11, 'K'=>4, 'Q'=>3, 'J'=>2, 'T'=>10, '9'=>0, '8'=>0, '7'=>0};

n, b = gets.chomp.split;
points = 0;

for i in 1..n.to_i
	4.times do
		ip = gets;
		if (ip[1] == b)
			points += dominant[ip[0]];
		else
			points += notDominant[ip[0]];
		end
	end
end

print(points);