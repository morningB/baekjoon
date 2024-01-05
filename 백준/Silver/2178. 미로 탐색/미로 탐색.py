from collections import deque

n,m = map(int,input().split())

g = []
dx = [0,-1,0,1]
dy = [-1,0,1,0]

for _ in range(n):
    g.append(list(map(int,input())))

def bfs(x,y):
    que = deque()
    que.appendleft((x,y))

    while que:
        x,y=que.popleft()
        for i in range(4):
            nx = x+dx[i]
            ny = y+dy[i]
            if nx<0 or ny <0 or nx >=n or ny >= m:
                continue
            if g[nx][ny] ==0:
                continue
            if g[nx][ny] == 1:
                g[nx][ny] = g[x][y] +1
                que.append((nx,ny))
    return g[n-1][m-1]

print(bfs(0,0))
