from collections import deque

t = int(input())

for i in range(t):
    l = int(input())
    # 나이트의 이동 경로 x,y
    dx = [+2, +1, -1, -2, -2, -1, +1, +2]
    dy = [+1, +2, +2, +1, -1, -2, -2, -1]
    # 나이트가 방문한 곳을 표시
    vis = [[0] * l for _ in range(l)]
    # 현재 나이트 위치와 도착 좌표
    n = list(map(int,input().split()))
    m = list(map(int,input().split()))
    q = deque()
    
    q.append((n[0],n[1]))
    vis[n[0]][n[1]] = 1
    
    while q:
        x,y = q.popleft()
        # 도착 위치에 도착한다면
        if x == m[0] and y==m[1]:
            print(vis[x][y] -1)
            break

        for i in range(8):
            nx = dx[i] +x 
            ny = dy[i] + y
            # 범위를 넘지 않고 방문 안했다면
            if 0<= nx < l and 0<= ny < l and vis[nx][ny] == 0:
                vis[nx][ny] = vis[x][y] +1
                q.append((nx,ny))
