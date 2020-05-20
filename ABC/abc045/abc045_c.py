s = input()
l = len(s)


def dfs(i, f):
    if i == l - 1:
        return sum(list(map(int, f.split('+'))))

    return dfs(i + 1,  f + s[i + 1]) + dfs(i + 1, f + '+' + s[i + 1])


print(dfs(0, s[0]))
