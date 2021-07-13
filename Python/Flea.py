a = input()
b = input()
a = a.upper()
b = b.upper()
c = 0

for i in range(len(a)):
    if(a[i] < b[i]):
        c = -1
        break

    elif(a[i] > b[i]):
        c = 1
        break
print(c)
