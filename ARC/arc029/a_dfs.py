def dfs(i, a, b):
    global ans
    if i == n:
        ans = min(ans, max(a, b))
    else:
        dfs(i + 1, a + t[i], b)
        dfs(i + 1, a, b + t[i])


n = int(input())
t = [int(input()) for _ in range(n)]

ans = float('inf')

dfs(0, 0, 0)
print(ans)
