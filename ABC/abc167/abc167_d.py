n, k = map(int, input().split())
a = list(map(int, input().split()))

roopStart = -1
roopCount = 0
firstMove = 0
now = 0
trace = [0] * n

for i in range(2 * n):
    if trace[now] == 1 and roopStart == -1:
        roopStart = now

    if trace[now] == 2:
        break

    if roopStart != -1:
        roopCount += 1
    else:
        firstMove += 1

    trace[now] += 1
    now = a[now] - 1

firstMove -= roopCount

now = 0
if k < firstMove:
    for i in range(k):
        now = a[now] - 1
    print(now + 1)
else:
    for i in range(firstMove):
        now = a[now] - 1

    k -= firstMove
    k %= roopCount
    for i in range(k):
        now = a[now] - 1
    print(now + 1)
