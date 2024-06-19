n,m = map(int,input().split()  )
s = [0] * m
vi = [False] * (n+1)

def ubc(x):
    if x == m:
        for i in range(m):
            print(s[i], end=' ')
        print()  # 개행
        return
    for i in range(1, n+1):
        if not vi[i]:
            s[x] = i
            vi[i] = True
            ubc(x+1)
            vi[i] = False

ubc(0)