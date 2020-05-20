import numpy as np
from scipy.sparse.csgraph import shortest_path, floyd_warshall, dijkstra, bellman_ford, johnson
from scipy.sparse import csr_matrix
n, m = map(int, input().split())

path = [sorted(list(map(int, input().split()))) for _ in range(m)]

path = sorted(path, key=lambda p: min(p[0], p[1]))

ans = [0] * n

print('Yes')

print(path)
for i in range(len(path)):
  


print(ans)