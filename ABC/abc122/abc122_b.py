s = input()

acgt = ['A', 'C', 'G', 'T']
count = 0
ans = 0

for i in range(len(s)):
    if s[i] in acgt:
        count += 1
    ans = max(ans, count)
    if not s[i] in acgt:
        count = 0

print(ans)