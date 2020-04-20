n, k = map(int, input().split())
n = n % k
flag = False
while not flag:
  if abs(n - k) < n:
    n = abs(n - k)
  else:
    flag = True
print(n)