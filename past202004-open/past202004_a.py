s, t = input().split()

if s[0] == 'B':
  s =  10 - int(s[1])
else:
  s = int(s[0]) + 9

if t[0] == 'B':
  t = 10 - int(t[1])
else:
  t = int(t[0]) + 9

print(abs(t - s))