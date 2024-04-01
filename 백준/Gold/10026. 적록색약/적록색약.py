
from collections import deque
n = int(input())
count = 0
count2 = 0
g =[]
vi = [[False]*n for _ in range(n)]
vi2 = [[False]*n for _ in range(n)]
for i in range(n):
    x = list(input())
    g.append(x)
  
q = deque([])
dx = [1,-1,0,0]
dy= [0,0,1,-1]

def bfs(a,b,vis):
    q.append((a,b))
    cc = g[a][b]
    vis[a][b] = True
    while q:
        x,y = q.popleft()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if 0<=nx<n and 0<= ny < n and g[nx][ny] == cc and not vis[nx][ny]:
                q.append((nx,ny))
                vis[nx][ny] = True
                
for i in range(n):
    for j in range(n):
        if not vi[i][j]:
            bfs(i,j,vi)
            count +=1
        
for i in range(n):
    for j in range(n):
        if g[i][j] =='G':
            g[i][j] = 'R'


for i in range(n):
    for j in range(n):
        if not vi2[i][j]:
            bfs(i,j,vi2)
            count2 +=1
        
print(count,count2)