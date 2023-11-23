n = int(input())

for _ in range(n):
    m,k,l = map(int,input().split())
    re = l%m
    a = l//m
    if re == 0:
        print(m * 100 + a)
    else:
        print(re*100 + a+1)



