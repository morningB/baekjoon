
n = input()

count = 0
setList = [0] * 10

for i in range(len(n)):
    num = int(n[i])
    if num == 9 or num == 6:
        if setList[6]<=setList[9]:
            setList[6] += 1
        else:
            setList[9]+= 1
    else:
        setList[num] += 1




print(max(setList))