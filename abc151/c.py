N, M = map(int, input().split())
ac = [False] * N
wa = [0] * N
ans = [0, 0]
for i in range(M):
    p, S = input().split()
    p = int(p) - 1
    if not ac[p]:
        if S == 'WA':
            wa[p] += 1
        elif S == 'AC':
            ac[p] = True
for i in wa:
    if ac[i]:
        ans[0] += wa[i]
        ans[1] += 1
print(ans[0], ans[1])
