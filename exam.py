N = int(input())
s = [list(input()) for _ in range(N)]

procedure = []
tmp = []

# 現在地が.ならば一つ右と一つ下をみてxがあればとりあえずoを置く(1)
# その後xがある方を辿りながら.に置き換えていく
# .が出現すればoを置き、出現しなければ(1)は採用しない

# 手順の長さが最小のものを採用

# 右側xかどうか


def is_the_right_x(s, i, j):
    if len(s) != j + 1 and s[i][j + 1] == 'x':
        return True
    else:
        return False

# 下側がxかどうか


def is_the_lower_x(s, i, j):
    if len(s) != i + 1 and s[i + 1][j] == 'x':
        return True
    else:
        return False


def search(S, i, j):
    # for m in range(len(S)):
    #     for k in range(len(S)):
    #         print(S[m][k], end=' ')
    #     print('')
    if S[i][j] == '.':
        if is_the_lower_x(S, i, j):
            s = S.copy()
            tmp.append([i, j])
            s[i][j] = 'o'
            t = i + 1
            while s[t][j] != '.':
                s[t][j] = '.'
                t += 1
            if t + 1 <= len(s) and s[t][j] == '.':
                s[t][j] = 'o'
                tmp.append([t, j])
            if j + 1 <= len(s) and s[i][j + 1] != 'x':
                return search(S, i, j + 1)
        if is_the_right_x(S, i, j):
            s = S.copy()
            tmp.append([i, j])
            s[i][j] = 'o'
            t = j + 1
            while s[i][t] != '.':
                s[i][t] = '.'
                t += 1
            if t + 1 <= len(s) and s[i][t] == '.':
                s[i][t] = 'o'
                tmp.append([i, t])
            if t + 2 <= len(s):
                return search(s, i, t + 1)
            else:
                return search(s, i + 1, t + 1)
        if i + 1 == len(S) and j + 1 == len(S):
            return
        elif j + 1 == len(S):
            return search(S, i + 1, 0)
        else:
            return search(S, i, j + 1)
    else:
        if i + 1 == len(S) and j + 1 == len(S):
            return -1
        elif j + 1 == len(S):
            return search(S, i + 1, 0)
        else:
            return search(S, i, j + 1)


search(s, 0, 0)
print(len(tmp))
for i in range(len(tmp)):
    print(tmp[i][0], tmp[i][1])
