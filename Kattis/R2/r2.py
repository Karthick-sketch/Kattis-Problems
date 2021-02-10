ip = input()
R1 = ''
for i in range(len(ip)):
  if (ip[i] != ' '):
    R1 += ip[i]
  else:
    break

R1 = int(R1)
S = int(ip[i+1:])
if (R1 >= -1000 and R1 <= 1000 and S >= -1000 and S <= 1000):
  print(2*S-R1);