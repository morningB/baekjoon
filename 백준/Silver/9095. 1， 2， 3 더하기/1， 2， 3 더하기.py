n = int(input())


for i in range(n):
    m = int(input())
    list = [0] * (m+1)

    for j in range(1,m+1):
        if j == 1:
            list[j]=1
        elif j == 2:
            list[j] = 2
        elif j == 3:
            list[j] = 4
        else:
            list[j] = list[j-1]+list[j-2]+list[j-3]
    print(list[j])
   
    