def find_parent(par,x):
    if par[x] != x:
        par[x]  = find_parent(par,par[x])
    return par[x]

def union_parent(par,a,b):
    a = find_parent(par,a)
    b = find_parent(par,b)
    if a < b:
        par[b] = a
    else:
        par[a] = b
    

n = int(input())
e = int(input())

par = [0]*(n+1)
edge = []
re = 0

for i in range(e):
    a,b,cost = map(int,input().split())
    edge.append((cost,a,b))    

for i in range(1,n+1):
    par[i] =i

edge.sort()

for i in edge:
    cost,a,b = i
    if find_parent(par,a) != find_parent(par,b):
        union_parent(par,a,b)
        re += cost
print(re)
