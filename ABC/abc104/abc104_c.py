from math import ceil
d, g = map(int, input().split())

pc = [list(map(int, input().split())) for _ in range(d)]

ans = float('inf')

for bit in range(1 << d):
    count = 0
    sum = 0
    residue = set(range(1, d + 1))

    for i in range(d):
        if bit & (1 << i):
            sum += pc[i][0] * (i + 1) * 100 + pc[i][1]
            count += pc[i][0]
            residue -= {i + 1}

    if sum < g:
        use = max(residue)
        n = min(pc[use - 1][0], ceil((g - sum) / (use * 100)))
        count += n
        sum += use * n * 100

    if sum >= g:
        ans = min(ans, count)

print(ans)
