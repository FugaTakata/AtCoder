s = input()
t = input()
ans = 'Yes'
for i in range(len(s)):
    if s[i] != t[i]:
        ans = 'No'
if len(s) == len(t) - 1 and ans == 'Yes':
    print(ans)
else:
    print('No')
