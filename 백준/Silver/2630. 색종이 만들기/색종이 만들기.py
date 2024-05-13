n = int(input())
paper = [list(map(int,input().split())) for _ in range(n)]

w,b = 0,0

def change(x,y,n):
    global b, w

    cur = paper[x][y]
    for i in range(x,x+n):
        for j in range(y,y+n):
            if cur != paper[i][j]:
                for k in range(2):
                    for l in range(2):
                        nn = n//2
                        change(x+(k*nn),y+(l*nn),nn)
                return
            
    if cur == 0:
        w = w+1
    else:
        b = b+1

change(0,0,n)
print(w)
print(b)