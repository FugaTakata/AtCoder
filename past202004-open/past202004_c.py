import sys
n = int(input())
s = [list(input()) for _ in range(n)]

for i in reversed(range(1, n)):
    for j in range(2 * n - 1):
        if s[i][j] == 'X':
            if j == 0:
                if s[i - 1][j + 1] == '#':
                    s[i - 1][j + 1] = 'X'
            elif j == 2 * n - 2:
                if s[i - 1][j - 1] == '#':
                    s[i - 1][j - 1] = 'X'
            else:
                if s[i - 1][j - 1] == '#':
                    s[i - 1][j - 1] = 'X'
                if s[i - 1][j] == '#':
                    s[i - 1][j] = 'X'
                if s[i - 1][j + 1] == '#':
                    s[i - 1][j + 1] = 'X'

for i in range(n):
    for j in range(2 * n - 1):
        sys.stdout.write(s[i][j])
    print('')
