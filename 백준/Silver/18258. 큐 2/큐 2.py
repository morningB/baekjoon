from collections import deque
import sys
input  = sys.stdin.readline
n = int(input())

q = deque([])

for i in range(n):
    m = input().split()

    if m[0] == 'push':
        q.append(int(m[1]))
    elif m[0] == 'pop':
        if len(q) == 0:
            print(-1)
        else:
            print(q.popleft())
    elif m[0] == 'size':
        print(len(q))
    elif m[0] == 'empty':
        if len(q) == 0:
            print(1)
        else:
            print(0)
    elif m[0] == 'front':
        if len(q) == 0:
            print(-1)
        else:
            print(q[0])
    elif m[0] == 'back':
        if len(q) == 0:
            print(-1)
        else:
            print(q[-1])


    