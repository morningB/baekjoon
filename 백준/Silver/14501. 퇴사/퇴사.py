n = int(input())

niw = []
dp = [0 for i in range(n+1)]
for i in range(n):
    a,b = map(int,input().split())
    niw.append((a,b))

for i in range(n):
    for j in range(i+niw[i][0],n+1):
        if dp[j] < niw[i][1] + dp[i]:
            dp[j] = niw[i][1] + dp[i]

print(dp[n])