n = input()
l = len(n)
last = n[l-1]

if last == '3':
    print('bon')
elif last == '0' or last == '1' or last == '6' or last == '8':
    print('pon')
else:
    print('hon')
