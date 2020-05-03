from math import floor
A, B, N = map(int, input().split())
print(floor((min(N + 1, B) - 1) * A / B))
