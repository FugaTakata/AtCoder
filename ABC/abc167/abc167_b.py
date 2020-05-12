a, b, c, k = map(int, input().split())
ans = 0

if a < k:
    k -= a
    ans += a
else:
    ans = k
    k = 0
k -= b
if k > 0:
    ans -= k
print(ans)
