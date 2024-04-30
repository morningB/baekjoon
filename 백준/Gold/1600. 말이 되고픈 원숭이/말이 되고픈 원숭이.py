from collections import deque

k = int(input())
w,h = map(int,input().split())

g= []
vi =[[[0]* (k+1) for _ in range(w)] for _ in range(h)]

for i in range(h):
    g.append(list(map(int,input().split())))

q = deque()
dx = [1,-1,0,0]
dy = [0,0,1,-1]
ex = [1,2,2,1,-1,-2,-2,-1]
ey=[2,1,-1,-2,-2,-1,1,2]

vi[0][0][0] = 1

def bfs(i,j,l):
    global k
    q.append((i,j,l))
    
    while q:
        x,y,z = q.popleft()
        if x == h-1 and y == w-1:
            return vi[x][y][z]-1
                
        for i in range(4):
            nx,ny = dx[i] + x,dy[i]+ y
            if 0<= nx <h and 0<= ny <w and g[x][y] == 0 and vi[nx][ny][z] == 0:
                q.append((nx,ny,z))
                vi[nx][ny][z] = vi[x][y][z] + 1
        if k >z:
            for i in range(8):
                mx,my = ex[i] + x, ey[i] + y
                if 0<= mx <h and 0<= my <w and g[x][y] == 0 and vi[mx][my][z+1] == 0:
                    vi[mx][my][z+1] = vi[x][y][z] + 1
                    q.append((mx,my,z+1))
    return -1
                    



print(bfs(0,0,0))