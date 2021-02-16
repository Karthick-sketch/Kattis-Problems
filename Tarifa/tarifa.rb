gb = gets.to_i;
if gb >= 1 and gb <= 100
	month = gets.to_i;
	if month >= 1 and month <= 100
		tot = 0;
		month.times do
			p = gets.to_i;
			tot = (gb+tot)-p;
		end
		tot += gb;
		print tot;
	end
end