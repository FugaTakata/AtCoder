n, k = map(int, input().split())

a = [0] * n
for i in range(k):
    d = int(input())
    s = list(map(int, input().split()))
    for m in range(0, d):
        a[s[m] - 1] = 1
print(a.count(0))