
from collections import deque

n,m = map(int,input().split())

ji = deque([])
fire = deque([])

g = []
viF = [[0] * m for _ in range(n)]
viJ = [[0] * m for _ in range(n)]
for i in range(n):
    g.append(list(input()))


dx = [1,-1,0,0]
dy = [0,0,1,-1]

for i in range(n):
    for j in range(m):
        if g[i][j] == 'J':
            ji.append((i,j))
            viJ[i][j] = 1
        elif g[i][j] == 'F':
            fire.append((i,j))
            viF[i][j] = 1

def bfsJi():
    
    while fire:
        x,y= fire.popleft()
        for i in range(4):
            nx = dx[i] + x
            ny = dy[i] +y
            if 0<= nx < n and 0<= ny < m:
                if not viF[nx][ny] and g[nx][ny] != '#':
                    viF[nx][ny] = viF[x][y] +1
                    fire.append((nx,ny))
    while ji:
        x,y= ji.popleft()
        for i in range(4):
            nx = dx[i] + x
            ny = dy[i] +y
            if 0<= nx < n and 0<= ny < m:
                if g[nx][ny] != '#' and not viJ[nx][ny]:
                    if not viF[nx][ny] or viF[nx][ny] > viJ[x][y] +1:
                        viJ[nx][ny] = viJ[x][y] +1
                        ji.append((nx,ny))
            else:
                return viJ[x][y]
    return "IMPOSSIBLE"



print(bfsJi())