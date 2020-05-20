import numpy
import math
a, b, h, m = map(int, input().split())

minutes = h * 60 + m

h_radian = math.radians(minutes / 60 * 30)
m_radian = math.radians(minutes * 6)

# h_x = abs(a * math.sin(h_radian))
# h_y = abs(a * math.cos(h_radian))
# m_x = abs(a * math.sin(m_radian))
# m_y = abs(a * math.cos(m_radian))

# print(math.sqrt((h_x + m_x) ** 2 + (h_y + m_y) ** 2))

h_x = a * math.sin(h_radian)
h_y = a * math.cos(h_radian)
m_x = b * math.sin(m_radian)
m_y = b * math.cos(m_radian)

i = numpy.array([h_x, h_y])
j = numpy.array([m_x, m_y])

print(numpy.linalg.norm(i - j))

# print(h_x, h_y)
# print(m_x, m_y)