N = int(input())
P = list(map(int, input().split()))
MIN = list()
count = 0
MIN.append(P[0])
for i in range(1, N):
    MIN.append(min(MIN[i - 1], P[i]))
for i in range(0, N):
    if P[i] <= MIN[i]:
        count += 1
print(count)
