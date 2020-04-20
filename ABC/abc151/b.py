import math

N, K, M = map(int, input().split())
A = list(map(int, input().split()))

mean = 0.0
for i in range(N - 1):
    mean += A[i]
if (mean + K) / N < M:
    print(-1)
else:
    print(max(math.ceil(M * N - mean), 0))
