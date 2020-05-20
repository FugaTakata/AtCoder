n, m = map(int, input().split())
start = 1
end = n

for i in range(m):
    l, r = map(int, input().split())
    if start < l:
        start = l
    if r < end:
        end = r

print(max(end - start + 1, 0))