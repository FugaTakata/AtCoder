n, m = map(int, input().split())
a = list(map(int, input().split()))

# a.sort()

order = [list(map(int, input().split())) for i in range(m)]

# order = sorted([list(map(int, input().split()))
#                 for i in range(m)], key=lambda element: element[1], reverse=True)

for i in range(m):
    a.extend([order[i][1]] * order[i][0])

a.sort()
l = len(a)
# print(a)
print(sum(a[l-n:l]))
