import sys
input = sys.stdin.readline

n=int(input())
e=int(input())
g = [[] for _ in range(n+1)]
vi = [False] * (n+1)
count = 0
for _ in range(e):
    a,b = map(int,input().split())
    g[a].append(b)
    g[b].append(a)

def dfs(v):
    vi[v] = True
    global count
    count +=1
    for i in g[v]:
        if not vi[i]:
            dfs(i)
dfs(1)
print(count-1)