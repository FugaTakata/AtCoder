n = int(input())
h = list(map(int, input().split()))

count = 0

for i in range(n):
    for j in range(i + 1, n):
        if abs(i - j) == h[i] + h[j]:
            count += 1
print(count)
