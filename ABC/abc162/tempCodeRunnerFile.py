from math import gcd
K = int(input())
sum = 0
for a in range(K):
    for b in range(K):
        for c in range(K):
            sum += gcd(gcd(a + 1, b + 1), c + 1)
print(sum)