N = int(input())
S = [''] * N

for i in range(N):
    S[i] = input()
print(len(set(S)))