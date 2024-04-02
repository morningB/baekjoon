from collections import deque

m,n,h = map(int,input().split())
g =  [[list(map(int, input().split())) for _ in range(n)] for _ in range(h)]
date = 0
dx = [1,-1,0,0,0,0]
dy = [0,0,1,-1,0,0]
dz = [0,0,0,0,1,-1]

q = deque([])

for i in range(h):
    for j in range(n):
        for k in range(m):
            # 토마토가 있다면 큐에 토마토 위치 추가
            if g[i][j][k] == 1:
                q.append((i,j,k))

def bfs():
    while q:
        z,x,y =q.popleft()
        for i in range(6):
            nx = dx[i] + x
            ny = dy[i] + y
            nz = dz[i] + z
            # 아직 안익은 토마토가 있다면 추가
            if 0<= nx < n and 0<= ny < m and 0<= nz < h and g[nz][nx][ny] == 0:
                q.append((nz,nx,ny))
                # 1을 더해주며 익은 것을 판단
                g[nz][nx][ny] = g[z][x][y] +1


bfs()

for i in range(h):
    for j in range(n):
        for k in range(m):
            # 함수를 다 돌았는데 0이 있다면 막혀있다는 것 그래서 -1 출력
            if g[i][j][k] == 0:
                print(-1)
                exit(0)
            date = max(date,g[i][j][k])


print(date - 1)