ip = gets;
r1 = '';
for i in 0...ip.size
  if (ip[i] != ' ')
    r1 += ip[i];
  else
    break;
  end
end
r1 = r1.to_i;
s = ip.slice(i+1,ip.size).to_i;
if (r1 >= -1000 and r1 <= 1000 and s >= -1000 and s <= 1000)
  print(2*s-r1);
end