h = 0
v = 0

for i in range(5):

    line = input()
    line = line.split(' ')

    for j in range(5):
        if(line[j] == "1"):
            h = i
            v = j
            break

print(abs(h-2)+abs(v-2))
