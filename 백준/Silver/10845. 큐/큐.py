import sys
import queue


input = sys.stdin.readline

n=input()
qu = []

for i in range(int(n)):
    m = input().split()
    if m[0] ==  "push" : 
       qu.append(m[1])
    elif m[0] == "pop" : 
        if qu : 
            print(qu.pop(0))
        else : 
            print(-1)
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