N = int(input())
B = [-1] + [int(input()) - 1 for i in range(1, N)]

ans = 0

def calcSalary(arr, index):
    salary = 0
    count = arr.count(index)
    salaries = []
    if count == 1:
        return 2 * calcSalary(arr, arr.index(index)) + 1
    elif count > 1:
        for i in range(len(arr)):
            if arr[i] == index:
                salaries.append(calcSalary(arr, i))
        return max(salaries) + min(salaries) + 1
    else:
        return 1

ans = calcSalary(B, 0)

print(ans)
