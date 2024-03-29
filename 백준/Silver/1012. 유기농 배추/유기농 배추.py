
from collections import deque
def bfs(a,b):
    q.append((a,b))
    g[a][b] = 0
    while q:
        x,y = q.popleft()
        for i in range(4):
            nx = dx[i] +x
            ny = dy[i] +y
            if 0<= nx <n and 0<= ny <m and g[nx][ny] == 1:
           
                q.append((nx,ny))
                g[nx][ny] = 0


t = int(input())

for _ in range(t):
    m,n,k = map(int,input().split())
    q=deque([])
    g = [[0] *m for _ in range(n)]
    dx = [1,-1,0,0]
    dy = [0,0,1,-1]
    count  = 0

    for _ in range(k):
        x,y = map(int,input().split())
        g[y][x] = 1

    for j in range(n):
        for l in range(m):
            if g[j][l] == 1:
                bfs(j,l)
                count +=1

    print(count)
