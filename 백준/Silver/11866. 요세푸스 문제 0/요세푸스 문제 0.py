import sys
from collections import deque


input = sys.stdin.readline

n,m = map(int,input().split())

qu = list(i for i in range(1,n+1))

re = []
id = 0
while qu:
    id += m-1
    if id >= len(qu):
        id%=len(qu)

    re.append(str(qu.pop(id)))        

print("<",end="")

for i in range(n-1):
    print(re[i],end=", ")

print(re[len(re)-1],end="")
print(">")
