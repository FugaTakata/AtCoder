x = int(input())

for a in range(x + 1):
    for b in range(a):
        if a ** 5 - (b ** 5) == x:
            print(a, b)
            break
        elif a ** 5 - ((-b) ** 5) == x:
            print(a, b)
            break
