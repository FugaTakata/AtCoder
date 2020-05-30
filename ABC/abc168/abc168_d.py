from collections import deque
n, m = map(int, input().split())

adjacent_list = [[] for _ in range(n + 1)]

for i in range(m):
    a, b = map(int, input().split())
    adjacent_list[a].append(b)
    adjacent_list[b].append(a)

signs = [-1 for _ in range(n + 1)]

que = deque()
que.append(1)

while que:
    node = que.popleft()
    for i in adjacent_list[node]:
        if signs[i] == -1:
            que.append(i)
            signs[i] = node


print('Yes')
for i in range(2, n + 1):
    print(signs[i])