s = input()
ans = ''

a = s.count('a')
b = s.count('b')
c = s.count('c')

if max(a, b, c) == a:
    ans = 'a'
elif max(a, b, c) == b:
    ans = 'b'
else:
    ans = 'c'
print(ans)