import sys
from collections import deque


input = sys.stdin.readline

n=input()
qu = deque()

for i in range(int(n)):
    m = input().split()
    if m[0] ==  "push_back" : 
       qu.append(m[1])
    elif m[0] == "push_front":
        qu.appendleft(m[1])   
    elif m[0] == "pop_back" : 
        if qu : 
            print(qu.pop())
        else : 
            print(-1)
    elif m[0] == "pop_front":
        if qu:
            print(qu.popleft())
        else:
            print(0-1)
    elif m[0] == 'size' : 
        print(len(qu))

    elif m[0] == 'empty' :
        if len(qu) == 0 : 
            print(1)
        else : 
            print(0)

    elif m[0] == 'front' :
        if len(qu) == 0 : 
            print(-1)
        else : 
            print(qu[0])
    
    elif m[0] == 'back' :
        if len(qu) == 0 : 
            print(-1)
        else : 
            print(qu[-1])