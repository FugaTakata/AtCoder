a = int(input())
b = int(input())
c = int(input())

n = sorted([a, b, c], reverse=True)

print(n.index(a) + 1)
print(n.index(b) + 1)
print(n.index(c) + 1)
