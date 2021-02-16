a, b = gets.chomp.split.map(&:to_i)
l1 = [a, b]

a, b = gets.chomp.split.map(&:to_i)
l2 = [a, b]

a, b = gets.chomp.split.map(&:to_i)
l3 = [a, b]

l4 = []
if l1[0] == l2[0]
	l4.push(l3[0])
elsif l1[0] == l3[0]
	l4.push(l2[0])
elsif l2[0] == l3[0]
	l4.push(l1[0])
end

if l1[1] == l2[1]
	l4.push(l3[1])
elsif l1[1] == l3[1]
	l4.push(l2[1])
elsif l2[1] == l3[1]
	l4.push(l1[1])
end

print("#{l4[0]} #{l4[1]}")
