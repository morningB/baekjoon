n = int(input())

a= list(map(int,input().split(' ')))
b =  list(map(int,input().split(' '))) 

sum =0

for i in range(n):
    sum += max(b) * min(a)
    b.remove(max(b))
    a.remove(min(a))

print(sum) 
