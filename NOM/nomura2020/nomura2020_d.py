from math import factorial
n = int(input())
p = list(map(int, input().split()))

o = [[0] * (n + 1) for _ in range(n + 1)]

count = 0

path = 0

k = p.count(-1)

for i in range(1, n + 1):
    if p[i - 1] != -1:
        if o[i][p[i - 1]] == 0:
            path += 2
        o[i][p[i - 1]] = 1
        o[p[i - 1]][i] = 1


for i in range(1, n + 1):
    if p[i - 1] == -1:
        zero = o[i].count(0)
        count += (zero - 1) * path
        count += n - (zero - 1) * path

print(count * factorial(k) * path * k)
