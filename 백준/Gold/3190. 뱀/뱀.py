n = int(input())
k = int(input())

apple = []
count = 0
dx = [0,1,0,-1]
dy = [1,0,-1,0]
smap = [[0]* (n+1) for _ in range(n+1)]

for i in range(k):
    a,b = map(int,input().split())
    smap[a][b] = 1


l = int(input())

dic = []

for i in range(l):
    a,b = input().split()
    dic.append((int(a),b))

x,y = 1,1
smap[x][y] = 2
d = 0
q = [(x,y)]
index = 0

while True:
    nx = x+dx[d]
    ny = y+dy[d]
    if 1 <= nx and n>= nx and 1 <= ny and ny <= n and smap[nx][ny]!=2:

        if smap[nx][ny] == 0:
            smap[nx][ny] = 2
            q.append((nx,ny))
            px,py = q.pop(0)
            smap[px][py] = 0
        if smap[nx][ny] == 1:
            smap[nx][ny] == 2
            q.append((nx,ny))
    else:
        count += 1
        break
    x ,y = nx,ny
    count += 1
    if index < l and count == dic[index][0]:
        if dic[index][1] == "L":
            d = (d-1) % 4
        else:
            d = (d+1) % 4
        index += 1

print(count)