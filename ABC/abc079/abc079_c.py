s = input()
l = len(s)

for bit in range(1 << l - 1):
    sum = int(s[0])
    f = s[0]

    for i in range(l - 1):
        if bit & (1 << i):
            f += '+'
            sum += int(s[i + 1])
        else:
            f += '-'
            sum -= int(s[i + 1])
        f += s[i + 1]

    if sum == 7:
        print(f + '=7')
        exit()
