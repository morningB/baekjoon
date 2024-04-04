from collections import deque


def fireee():
    while fire:
        x,y= fire.popleft()
        for i in range(4):
            nx = dx[i] + x
            ny = dy[i] +y
            if 0<= nx < h and 0<= ny < w:
                if g[nx][ny] =='.' and vf[nx][ny] == 0:
                    vf[nx][ny] = vf[x][y] +1
                    fire.append((nx,ny))
                    

def bfs():
    while ji:
        x, y = ji.popleft()
        for i in range(4):
            nx = dx[i] + x
            ny = dy[i] + y
            if 0 <= nx < h and 0 <= ny < w:
                if g[nx][ny] =='.' and vj[nx][ny] == 0 and (vf[nx][ny] == 0 or vf[nx][ny] > vj[x][y] +1):
                    vj[nx][ny] = vj[x][y] + 1
                    ji.append((nx, ny))
        if x ==0 or x==h-1 or y == 0 or y == w-1:
            return vj[x][y]

t = int(input())

for _ in range(t):
    w,h = map(int,input().split())
    g = []
    dx = [1,-1,0,0]
    dy = [0,0,1,-1]
    ji =deque()
    fire = deque()
    vj = [[0]* w for _ in range(h)]
    vf = [[0]* w for _ in range(h)]
    
    for i in range(h):
        g.append(list(input()))
        for j in range(w):
            if g[i][j] == '@':
                ji.append((i,j))
                vj[i][j] = 1
            if g[i][j] == '*':
                fire.append((i,j))
                vf[i][j] = 1
    
    fireee()
    re = bfs()
    if re:
        print(re)
    else:
        print("IMPOSSIBLE")
    
    

            