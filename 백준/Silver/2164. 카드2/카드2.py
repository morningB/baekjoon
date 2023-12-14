import sys
from collections import deque

input = sys.stdin.readline

n = int(input())
m = deque([i for i in range(1,n+1)])
i=0
while len(m)>1:
    if i%2==0:
        m.popleft()
    else:
        m.append(m.popleft())
    i+=1
     

print(m[0])
