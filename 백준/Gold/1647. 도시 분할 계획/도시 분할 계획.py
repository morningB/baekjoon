import sys
input = sys.stdin.readline
def find_parent(par,x):
    if par[x] != x:
        par[x] = find_parent(par,par[x])
    return par[x]

def union_parent(par,a,b):
    a = find_parent(par,a)
    b = find_parent(par,b)
    if a<b:
        par[b] = a
    else:
        par[a] = b
n , m= map(int,input().split())
g = [0] *(n+1)

edge = []
re = 0

for i in range(1,n+1):
    g[i] = i

for i in range(m):
    a,b,cost = map(int,input().split())
    edge.append((cost,a,b))

edge.sort()

last=0

for e in edge:
    cost,a,b = e
    if find_parent(g,a) != find_parent(g,b):
        union_parent(g,a,b)
        re += cost
        last = cost

print(re - last)