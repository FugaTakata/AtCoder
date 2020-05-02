S = input()
l = len(S)
count = 0
base = ''

arr = []
for i in range(l - 3):
    base = ''.join([S[i], S[i + 1], S[i + 2]])
    for j in range(i + 3, l):
        base = ''.join([base, S[j]])
        arr.append(base)
        if int(base) % 3 == 0 and int(base) % 673 == 0:
            count += 1
print(count)
