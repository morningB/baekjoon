list = []

for i in range(5):
    list.append(int(input()))
    if list[i] <40 :
        list[i]= 40

print(sum(list)//5)
