n = int(input())
ans = 'No'
if int(n % 100 / 10) == 7:
    ans = 'Yes'
elif n % 10 == 7:
    ans = 'Yes'
elif int(n / 100) == 7:
    ans = 'Yes'
print(ans)
