from fractions import gcd

n = int(input())

t = [int(input()) for _ in range(n)]

ans = t[0]
for i in range(1, n):
    ans = ans * t[i] // gcd(ans, t[i])
print(ans)