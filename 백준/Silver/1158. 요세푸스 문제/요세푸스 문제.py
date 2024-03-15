from collections import deque

n,m = map(int,input().split())
re = [(i+1) for i in range(n)]
k = 0
new = []

for i in range(n):
    k = k + m-1
    if k>=len(re):
        k = k%(len(re))  
    a = re.pop(k)  
    new.append(a)


print("<",end='')
for i in range(len(new)-1):
    print(new[i],end=', ')
print(str(new[-1]) + ">")