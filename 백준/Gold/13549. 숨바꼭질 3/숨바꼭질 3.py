from collections import deque

n,k = map(int,input().split())

dx = [1,-1]
a = 100001
g =[]
# 위치를 기록할 리스트
vi = [0] * a
q = deque()

# 수빈이의 출발 위치를 덱에 추가
q.append(n)
vi[n] = 1
while q:
    x = q.popleft()
    # 동생 위치에 도착했다면 멈춤
    if x == k:
        break
    # 현 위치에서 for문을 통해 이동
    for i in (2*x,x-1,x+1):
        if 0<= i < a and vi[i] == 0:
            # 순간이동 시 위치
            if i == 2*x:
                vi[i] = vi[x]
            else:
                # 걷기 이동시에는 +1
                vi[i] = vi[x] +1
            q.append(i)

print(vi[k]-1)