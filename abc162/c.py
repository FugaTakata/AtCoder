from math import gcd
K = int(input())
sum = 0
for a in range(1, K + 1):
    for b in range(1, K + 1):
        for c in range(1, K + 1):
            sum += gcd(gcd(a, b), c)
print(sum)
