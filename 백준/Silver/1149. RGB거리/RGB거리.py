n = int(input())

num = [list(map(int,input().split())) for _ in range(n)]

for i in range(1,n):
    num[i][0] = min(num[i-1][1], num[i-1][2]) + num[i][0]
    num[i][1] = min(num[i-1][0], num[i-1][2]) + num[i][1]
    num[i][2] = min(num[i-1][0], num[i-1][1]) + num[i][2]


print(min(num[n-1]))