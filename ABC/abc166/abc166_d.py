x = int(input())

for b in range(2000):
    for a in range(2000):
        if a**5 - b**5 == x:
            print(a, b)
            exit()
