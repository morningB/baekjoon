n = int(input())

a = []
for i in range(n):
    a.append(int(input()))

a.sort()

b= []
for i in a:
    b.append(i*n)
    n-=1

print (max(b))