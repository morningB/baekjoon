import sys

sys.setrecursionlimit(10**6)

t  = int(input())

def dfs(s):
    global count
    # 체크 확인 후 순환 확인을 위한 임시 배열에 넣기
    vi[s] = True
    arr.append(s)
    # 순환 검사
    if vi[g[s]]:
        # 조를 이룬다면
        if g[s] in arr:
            count -= len(arr[arr.index(g[s]):])
        return
    # 아니라면발
    else:
        dfs(g[s])

for _ in range(t):
    n = int(input())

    # 1부터 시작이니까
    g = [0]
    g.extend(list(map(int,input().split())))
    vi = [False] * (n+1)
    # 조를 이루는 수를 전체에서 뺀다.
    count = n

    for i in range(1,n+1):
        # 아직 체크하지 않았다면
        if not vi[i]:
            arr = []
            dfs(i)

    print(count)
   