n = int(input())
a = list(map(int, input().split()))

for i in range(n):
    a[i] -= 1

for i in range(n):
    count = 0
    now = a[i]
    while now != i:
        count += 1
        now = a[now]
    print(count + 1, end=' ')
print('')
