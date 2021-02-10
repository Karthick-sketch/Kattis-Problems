x = gets.to_i;
y = gets.to_i;
if x > 0 and y > 0 then
	print(1)
elsif x < 0 and y > 0 then
	print(2)
elsif x < 0 and y < 0 then
	print(3)
elsif x > 0 and y < 0 then
	print(4)
end