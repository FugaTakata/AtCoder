for i in range(n):
    for j in range(i, n):
        if xor[j] - xor[i] == sum[j] - sum[i]:
            count += 1