n = int(input())


v1=[False] *(n+1)
v2=[False] *(2*(n-1)+1)
v3=[False] *(2*(n-1)+1)

count = 0

def f(x):
    global n,count
    if x == n:
        count +=1
        return
    for i in range(n):
        if v1[i] or v2[i+x] or v3[n-i+x-1]:
            continue
        v1[i] = True
        v2[i+x] = True
        v3[n-i+x-1] = True
        f(x+1)
        v1[i] = False
        v2[i+x] = False
        v3[n-i+x-1] = False
        


f(0)
print(count)