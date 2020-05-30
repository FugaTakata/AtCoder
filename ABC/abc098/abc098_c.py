n = int(input())
s = input()

ans = [0] * n
left = 0
right = s[1:len(s)].count('E')
ans[0] = right

for i in range(1, n):
    if s[i - 1] == 'W':
        left += 1
    if s[i] == 'E':
        right -= 1
    ans[i] = left + right

print(min(ans))