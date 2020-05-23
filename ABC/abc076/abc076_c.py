s = list(reversed(input()))
t = list(reversed(input()))

match = True

for i in range(len(s)):
    match = True
    if len(s) < len(t) + i:
        match = False
        break

    if s[i] == t[0] or s[i] == '?':

        for j in range(len(t)):
            if not (s[i + j] == t[j] or s[i + j] == '?'):
                match = False

        if match:
            for j in range(len(t)):
                s[i + j] = t[j]
            break

if match:
    print(''.join(reversed(s)).replace('?', 'a'))
else:
    print('UNRESTORABLE')
