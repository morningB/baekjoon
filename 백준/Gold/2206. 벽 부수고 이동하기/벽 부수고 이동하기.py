from collections import deque

def bfs():
    
    q = deque()
    q.append((0,0,0))

    while q:
        x,y,z = q.popleft()
        # 지도의 마지막에 도착한다면 리턴
        if x==n-1 and y ==m-1:
            return vi[x][y][z]
			
        for i in range(4):
            nx = dx[i] + x
            ny = dy[i] + y
            
            if 0<= nx < n and 0<= ny <m:
                # 벽일경우 벽을 포함(깨서)해서 이전까지의 경로에서 1을 더해줌
                if g[nx][ny] == 1 and z == 0:
                    vi[nx][ny][1] = vi[x][y][0] +1 
                    q.append((nx,ny,1))   
                    # 벽이 아닌경우는 경로찾기와 동일하게
                elif g[nx][ny] == 0 and vi[nx][ny][z] == 0:
                    vi[nx][ny][z] =  vi[x][y][z] +1
                    q.append((nx,ny,z))    
                	
    return -1

n,m = map(int,input().split())

g = []
vi =  [[[0]*2 for _ in range(m)]for _ in range(n)]

dx =[1,-1,0,0]
dy = [0,0,1,-1]


for _ in range(n):
    g.append(list(map(int,input().strip())))

# 출발
vi[0][0][0] = 1

print(bfs()) 
    


                        