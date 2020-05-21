
n = int(input())
t = [int(input()) for _ in range(n)]

ans = float('inf')


for bit in range(1 << n):
    a = 0
    b = 0

    for i in range(n):
        if bit & (1 << i):
            a += t[i]
        else:
            b += t[i]

    ans = min(ans, max(a, b))


print(ans)
