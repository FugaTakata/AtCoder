# from math import floor

# r, b = map(int, input().split())

# x, y = map(int, input().split())


# # def bin_search(r, b, x, y):
# #     lower = 0
# #     upper = 10**18
# #     count = 0
# #     while lower <= upper:
# #         mid = (lower + upper) // 2
# #         if mid <= r and mid <= b:
# #             if mid <= (r - mid) // (x - 1) + (b - mid) // (y - 1):
# #                 count = max(count, mid)
# #                 lower = mid + 1
# #             else:
# #                 upper = mid - 1
# #         else:
# #             upper = mid - 1
# #     return count

# def bin_search(r, b, x, y):
#     lower = 0
#     upper = 10**18
#     count = 0
#     while lower <= upper:
#         mid = (lower + upper) // 2
#         if mid <= r and mid <= b:
#             if mid <= floor((r - mid) / (x - 1)) + floor((b - mid) / (y - 1)):
#                 count = max(count, mid)
#                 lower = mid + 1
#             else:
#                 upper = mid - 1
#         else:
#             upper = mid - 1
#     return count


# print(bin_search(r, b, x, y))

from math import floor

print(-5 // 2)
print(floor(-5 / 2))