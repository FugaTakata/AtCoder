S = input()
N = int(input())

for i in range(N):
    l, r = map(int, input().split())
    S = S[0:l - 1] + S[l - 1:r][::-1] + S[r:len(S)]
print(S)