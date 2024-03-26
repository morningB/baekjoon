from collections import deque
n,m = map(int,input().split())
q = deque([])
g = []
for i in range(m):
    g.append(list(map(int,input().split())))
count = 0

for i in range(m):
    for j in range(n):
        if g[i][j] == 1:
            q.append([i,j])


def bfs():
    dx = [0,0,1,-1]
    dy = [1,-1,0,0]
     
    while q:
        x,y = q.popleft()
        for i in range(4):
            nx = dx[i] +x
            ny = dy[i] +y
            if 0<= nx <m and 0<= ny < n and g[nx][ny] == 0:
                g[nx][ny] = g[x][y]+ 1
                q.append([nx,ny])
                
bfs()

for i in g:
    for j in i:
        if j == 0:
            print(-1)
            exit(0)
    count = max(count,max(i))
print(count-1)

