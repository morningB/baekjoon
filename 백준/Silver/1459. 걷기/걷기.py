n,m,k,l = map(int,input().split())

m1 = (n+m) *k

if (n+m) % 2 ==0:
    m2 = max(n,m)*l
else: 
    m2 = (max(n,m) - 1) * l + k

m3 = min(n,m) * l  + abs(n-m) * k 

print(min(m1,m2,m3))