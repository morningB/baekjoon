from collections import deque

n =int(input())
g = []
for _ in range(n):
    g.append(list(map(int,input().split())))

q = deque()
dx = [1,-1,0,0]
dy = [0,0,1,-1]
vi = [[False]*n for _ in range(n)]
road = int(1e9)
island = 1

# 섬들을 나누는 bfs
def bfs(a,b):
    q.append((a,b))
    vi[a][b] = True
    while q:
        x,y= q.popleft()
        for i in range(4):
            nx,ny = dx[i]+ x, dy[i] +y
            if 0<= nx <n and 0<= ny <n:
                if g[nx][ny] == 1 and not vi[nx][ny]:
                    q.append((nx,ny))
                   # 섬들을 나눈다.
                    g[nx][ny] = island
                    vi[nx][ny] = True

#다리 연결
def bbfs(a):
    qu = deque()
    # 다리 연결을 위한 리스트
    sa = [[-1]*n for _ in range(n)]

    # 육지인 곳은 연결이 필요 없음
    for i in range(n):
        for j in range(n):
            if g[i][j] == a:
                sa[i][j] = 0
                qu.append((i,j))
    while qu:
        x,y = qu.popleft()
        for i in range(4):
            mx,my = dx[i] +x, dy[i] +y
            if 0<= mx <n and 0<= my < n:
                # 육지라면
                if g[mx][my] and g[mx][my] != a:
                    return sa[x][y]
                # 물이면서 다리 연결이 안되어있다면
                elif not g[mx][my] and sa[mx][my] == -1:
                    # 연결시킨다.
                    sa[mx][my] = sa[x][y] +1
                    qu.append((mx,my))
    return int(1e9)



for i in range(n):
    for j in range(n):
        if g[i][j] and not vi[i][j]:
            bfs(i,j)
            vi[i][j] = True
            g[i][j] = island
            island += 1

for i in range(1,island):
    road = min(road,bbfs(i))

print(road)