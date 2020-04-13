N = int(input())
count = 0
for k in range(2, N + 1):
    n = N
    # while n >= k:
    # if n % k == 0:
    #   n /= k
    # else:
    #   n -= k
    if n % k == 0 or n % k == 1:
        count += 1
    # if n == 1:
      # count += 1
print(count)
