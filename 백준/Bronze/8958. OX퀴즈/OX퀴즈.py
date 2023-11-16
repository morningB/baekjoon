n = int(input())

for _ in range(n):
    sum1 = 0
    sum2 = 0
    bia = list(input())
    for i in range(len(bia)):
        if bia[i] == "O":
            sum1+=1
            sum2 += sum1
        else :
            sum1 = 0
    print(sum2)
