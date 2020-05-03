import math
X = int(input())
m = 100
year = 0
while m < X:
  year += 1
  m = math.floor(m * 1.01)
print(year)