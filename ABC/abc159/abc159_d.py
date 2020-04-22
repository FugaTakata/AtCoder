from math import factorial
def comb(n, r):
    return factorial(n) // (factorial(n - r) * factorial(r))
n = int(input())
a = list(map(int, input().split()))

for i in range(n):
    if a[i] == n:
        print(comb(n - 1, a.count(a) - 1))
    else:
        print(comb(n - 1, a.count(a)))
