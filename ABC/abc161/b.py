n, m = map(int, input().split())
a = list(map(int, input().split()))
count = 0
judge = sum(a) / (4.0 * m)
for i in range(n):
  if a[i] >= judge:
    count += 1
if count >= m:
  print('Yes')
else:
  print('No')