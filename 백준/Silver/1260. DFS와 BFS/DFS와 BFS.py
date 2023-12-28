from collections import deque



def dfs(v):
    # 현재 노드를 방문 처리
    v2[v] = True
    print(v, end=' ')
    # 현재 노드와 연결된 다른 노드를 재귀적으로 방문
    for i in g[v]:
        if not v2[i]:
            dfs(i)

# BFS 함수 정의
def bfs(start):
    # 큐(Queue) 구현을 위해 deque 라이브러리 사용
    queue = deque([start])
    # 현재 노드를 방문 처리
    v1[start] = True
    # 큐가 빌 때까지 반복
    while queue:
        # 큐에서 하나의 원소를 뽑아 출력
        v = queue.popleft()
        print(v, end=' ')
        # 해당 원소와 연결된, 아직 방문하지 않은 원소들을 큐에 삽입
        for i in g[v]:
            if not v1[i]:
                queue.append(i)
                v1[i] = True


n,m,v = map(int,input().split())

g = [[] for _ in range(n+1)]
v1=[False]* (n+1)
v2=[False]* (n+1)

for _ in range(m):
    a,b = map(int,input().split())
    g[a].append(b)
    g[b].append(a)

for i in g:
    i.sort()

dfs(v)
print()
bfs(v)



