from collections import deque
n,m = map(int,input().split())

g = []
for i in range(n):
    g.append(list(map(int,input().split())))

def bfs(x,y):
    q= deque()
    q.append([x,y])
    dx = [1,-1,0,0]
    dy = [0,0,1,-1]
    g[x][y] = 0
    c = 1
    while q:
        x,y = q.popleft()
        for i in range(4):
            nx = dx[i] +x
            ny = dy[i] + y
            if 0<=nx < n and 0<= ny < m and g[nx][ny] == 1:
                q.append([nx,ny])
                g[nx][ny] = 0
                c +=1
    return c
maxC = 0
d = 0
for i in range(n):
    for j in range(m):
        if g[i][j] == 1:
            d += 1
            maxC = max(maxC, bfs(i,j))

print(d)
print(maxC)