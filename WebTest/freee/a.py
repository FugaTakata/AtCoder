daysInYear, daysInMonth, daysInWeek, date = input().split()

daysInYear = int(daysInYear)
daysInMonth = int(daysInMonth)
daysInWeek = int(daysInWeek)

# target date
targetYear = int(date[0:4])
targetMonth = int(date[5:7])
targetDay = int(date[8:10])

# days past
daysPast = 0

# calc month per year
monthCount = daysInYear // daysInMonth

# calc leap day
leapDay = daysInYear % daysInMonth

# year per month or day per month are 3 digits or more OR targetDay or targetMonth are out out of range > illegal input > exit
if (monthCount + 1 > 99 and leapDay >= 1) or (monthCount > 99 and leapDay == 0):
    print(-1)
    exit()
elif daysInMonth > 99:
    print(-1)
    exit()
elif targetDay > daysInMonth:
    print(-1)
    exit()
elif targetMonth > monthCount + (1 if leapDay >= 1 else 0):
    print(-1)
    exit()



# calc days past

# year level
daysPast += (daysInYear // daysInMonth * daysInMonth) * (targetYear - 1) + leapDay * (targetYear - 1)

# month level
daysPast += daysInMonth * (targetMonth - 1)

# day level
daysPast += targetDay - 1

# calc day of the week
while daysPast >= daysInWeek:
    daysPast -= daysInWeek

# print(daysPast)
print(chr(ord('A') + daysPast))
