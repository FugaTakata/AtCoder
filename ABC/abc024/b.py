n, t = map(int, input().split())
start = 0
before = 0
total = 0
for i in range(n):
  a = int(input())
  if a - before > t:
    total += before - start + t
    start = a
  before = a
print(total)
