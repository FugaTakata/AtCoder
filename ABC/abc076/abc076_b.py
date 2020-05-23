def dfs(i, j):
    global ans
    if i == n:
        ans = min(ans, j)
    else:
        dfs(i + 1, 2 * j)
        dfs(i + 1, j + k)

n = int(input())
k = int(input())

ans = float('inf')
dfs(0, 1)
print(ans)

