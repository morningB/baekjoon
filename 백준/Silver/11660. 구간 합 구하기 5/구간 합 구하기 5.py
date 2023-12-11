import sys
input = sys.stdin.readline
n,m = map(int,input().split())

A = [[0]*(n+1)]
B = [[0] * (n+1) for _ in range(n+1)]

for _ in range(n):
    #리스트 배열 넣기
    A.append([0] + [int(x) for x in input().split()])


for i in range(1,n+1):
    for j in range(1,n+1):
        # 배열 합 리스트 구하기
        B[i][j] = B[i][j-1] + B[i-1][j] -B[i-1][j-1] + A[i][j]

for i in range(m):
    a,b,c,d = map(int,input().split())
    re = B[c][d]- B[a-1][d] - B[c][b-1] + B[a-1][b-1]
    print(re)

