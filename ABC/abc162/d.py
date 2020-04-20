# n = int(input())
# s = input()
# count = 0
# for i in range(n):
#     for j in range(n - i - 1):
#         # i + j + 1
#         if s[i] != s[i + j + 1]:
#             continue
#         else:
#             k = 'RGB'
#             k.replace(s[i], '').replace(s[i + j + 1], '')
#             count += s.count(k, i + j + 2)
#             if 2 * (i + j + 1) - i < len(s) - 1:
#                 if s[2 * (i + j + 1) - i] == k:
#                     count -= 1
# print(count)

n = int(input())
s = input()
result = s.count('R') * s.count('G') * s.count('B')
for i in range(n):
    for j in range(i + 1, n):
        k = 2 * j - i
        if k < n and s[k] != s[i] and s[k] != s[j] and s[j] != s[i]:
            result -= 1
print(result)
