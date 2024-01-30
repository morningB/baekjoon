import heapq
import sys
input = sys.stdin.readline
INF = int(1e9)

n= int(input())
m = int(input())


visi = [False]*(n+1)
g = [[] for i in range(n+1)]
d = [INF] *(n+1)

for i in range(m):
    a,b,c = map(int,input().split())
    g[a].append((b,c))

start,end = map(int,input().split())

def dijstra(start):
    q = []
    heapq.heappush(q,(0,start))
    d[start] = 0
    while q:
        dist,now = heapq.heappop(q)
        if d[now] <dist:
            continue
        for i in g[now]:
            cost = dist + i[1]
            if cost < d[i[0]]:
                d[i[0]] = cost
                heapq.heappush(q,(cost,i[0]))

    
dijstra(start)

if d[end] != INF:
    print(d[end])