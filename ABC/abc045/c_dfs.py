def dfs(i, f):
    if i == l - 1:
        return sum(list(map(int, f.split('+'))))

    else:
        return dfs(i + 1, f + '+' + s[i + 1]) + dfs(i + 1, f + s[i + 1])


s = input()
l = len(s)
print(dfs(0, s[0]))