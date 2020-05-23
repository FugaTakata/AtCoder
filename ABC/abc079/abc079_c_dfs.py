def dfs(i, f, sum):
    if i == l - 1:
        if sum == 7:
            print(f + '=7')
            exit()

    else:
        dfs(i + 1, f + '+' + s[i + 1], sum + int(s[i + 1]))
        dfs(i + 1, f + '-' + s[i + 1], sum - int(s[i + 1]))


s = input()
l = len(s)
dfs(0, s[0], int(s[0]))