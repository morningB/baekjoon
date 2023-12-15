n,m = map(int,input().split())

a = []
b = []

for i in range(n):
    a.append(input())

for i in range(n-7):
    for j in range(m-7):
        B = 0
        W = 0
        for x in range(i,i+8):
            for y in range(j,j+8):
                if (x+y)%2==0:
                    if a[x][y]!='W':
                        W += 1
                    else: 
                        B+=1
                else:
                    if a[x][y]!='B':
                        W += 1
                    else: 
                        B+=1
        b.append(B)
        b.append(W)
                                


print(min(b))