k = int(input())
count = 1
i = 1
ans = 1
while count < k:
    flag = True
    s = str(i)
    for n in range(len(s) - 1):
        if i >= 10:
            if abs(int(s[n + 1]) - int(s[n])) > 1:
                flag = False
                n = len(str(i)) - 1
    if flag:
        count += 1
    i += 1
print(i)
