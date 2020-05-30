import sys
from math import floor

sys.setrecursionlimit(31765)

def dfs(i, j, count):
    global min_count
    if seat[i][j] == 1:
        count += 1
    if i == 0 or i == n - 1 or j == 0 or j == n - 1:
        min_count = min(min_count, count)
        return
    else:
        if count < min_count:
            if i < n / 2:
                dfs(i - 1, j, count)
                if j < n / 2:
                    dfs(i, j - 1, count)
                else:
                    dfs(i, j + 1, count)
                dfs(i + 1, j, count)
            else:
                dfs(i + 1, j, count)
                if j < n / 2:
                    dfs(i, j - 1, count)
                else:
                    dfs(i, j + 1, count)
                dfs(i - 1, j, count)
        else:
            return


n = int(input())

p = list(map(int, input().split()))
# print(p)

seat = [[1] * n for _ in range(n)]

count = 0

for i in range(n**2):
    min_count = float('inf')
    j = floor((p[i] - 1) / n)
    k = p[i] % n - 1
    seat[j][k] = 0
    # print(seat)
    dfs(j, k, 0)
    if min_count > 0:
        count += 1

print(count)
