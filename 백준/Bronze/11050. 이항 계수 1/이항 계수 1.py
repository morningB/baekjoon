n,m = map(int,input().split())
re =1
re2 = 1
re3 = 1
for i in range(n,1,-1):
    re = re*i

for i in range(m,1,-1):
    re2 = re2*i

for i in range(n-m,1,-1):
    re3 = re3*i

re4 = re//(re2*re3)
print(re4)
