n = int(input())

paper = [list(map(int,input().split())) for _ in range(n)]

m = 0
z = 0
p = 0

def wjqrl(x,y,n):
    global m,z,p

    ch = paper[x][y]
    for i in range(x,x+n):
        for j in range(y,y+n):
            if ch != paper[i][j]:
                # nn = n//3
                # wjqrl(x,y,nn)
                # wjqrl(x,y+nn,nn)
                # wjqrl(x,y+(2*nn),nn)
                # wjqrl(x+nn,y,nn)
                # wjqrl(x+nn,y+nn,nn)
                # wjqrl(x+nn,y+(2*nn),nn)
                # wjqrl(x+(2*nn),y,nn)
                # wjqrl(x+(2*nn),y+nn,nn)
                # wjqrl(x+(2*nn),y+(2*nn),nn)
                for k in range(3):
                    for l in range(3):
                        nn = n // 3
                        wjqrl(x+(k*nn),y+(l*nn),nn)
                return
    
    if ch == -1:
        m = m+1
    elif ch == 0:
        z = z+1
    else:
        p = p+1
wjqrl(0,0,n)
print(m)
print(z)
print(p)