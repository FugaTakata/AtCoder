n = int(input())

a = list(map(int, input().split()))

xor_list = [0] * n
sum_list = [0] * n

xor_list[0] = a[0]
sum_list[0] = a[0]
for i in range(1, n):
    xor_list[i] = xor_list[i - 1] ^ a[i]
    sum_list[i] = sum_list[i - 1] + a[i]

count = 0

for i in range(n):
    for j in range(i, n):
        if i == j:
            if xor_list[i] == sum_list[i]:
                count += 1
        else:
            if xor_list[j] - xor_list[i - 1] == sum_list[j] - sum_list[i - 1]:
                count += 1

print(count)
