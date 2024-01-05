import sys
sys.setrecursionlimit(10**6)

def dfs(y,x):
   
    if x < 0 or x >= n or y < 0 or y >= m:
        return False

    if g[y][x] == 1:

        g[y][x] = 0

        dfs(y,x-1)
        dfs(y,x+1)
        dfs(y-1,x)
        dfs(y+1,x)

        dfs(y-1,x-1)
        dfs(y-1,x+1)
        dfs(y+1,x-1)
        dfs(y+1,x+1)
        return True
    return False

while True:
    n,m = map(int,input().split())
    
    if n == 0 and m == 0:
        break
    g = []

    for _ in range(m):
        g.append(list(map(int,input().split())))
    
    count =0
    for i in range(m):
        for j in range(n):
           if  dfs(i,j) == True:
               count+=1


    print(count)