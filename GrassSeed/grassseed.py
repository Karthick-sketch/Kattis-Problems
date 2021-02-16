def separate(ip, dt):
  a = ['']
  for i in range(len(ip)):
    if (ip[i] != ' '):
      a[0] += ip[i]
    else:
      break

  if dt == 'i':
    a[0] = int(a[0])
    a.append(int(ip[i+1:]))
  elif dt == 'f':
    a[0] = float(a[0])
    a.append(float(ip[i+1:]))

  return a

sow = 0.0
C = float(input())
L = int(input())
if (C > 0 and C <= 100 and L > 0 and L <= 100):
  for i in range(1, L+1):
    sqmtr = separate(input(), 'f')
    sow += sqmtr[0]*sqmtr[1]*C

  print(sow)