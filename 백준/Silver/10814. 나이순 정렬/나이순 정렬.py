n = int(input())

stri = []
for i in range(n):
    m,k = map(str,input().split(" "))
    stri.append([int(m),k])

stri.sort(key = lambda x: int(x[0]))


for i in stri:
    print(str(i[0])+" "+i[1])