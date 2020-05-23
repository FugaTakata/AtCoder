from itertools import combinations

def dfs(i, group):
    global ans
    if i == n:
        flag = True

        for cmb in combinations(group, 2):
            if friendly[cmb[0]][cmb[1]] == 0:
                flag = False
                break

        if flag:
            ans = max(ans, len(group))

    else:
        dfs(i + 1, group)
        dfs(i + 1, group + [i])

n, m = map(int, input().split())

friendly = [[0] * n for _ in range(n)]

for _ in range(m):
    x, y = map(int, input().split())
    friendly[x - 1][y - 1] = 1
    friendly[y - 1][x - 1] = 1

ans = 0
dfs(0, [])

print(ans)