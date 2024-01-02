import sys
input = sys.stdin.readline

n=int(input())
p,c = map(int,input().split())
e=int(input())

g = [[] for _ in range(n+1)]
vi = [False] * (n+1)
sk= [0] * (n+1)


for _ in range(e):
    a,b = map(int,input().split())
    g[a].append(b)
    g[b].append(a)

def dfs(v):
    vi[v] = True
    for i in g[v]:
        if not vi[i]:
            sk[i] = sk[v]+1
            dfs(i)


dfs(p)
if sk[c] > 0:
    print(sk[c])
else:
    print(-1)