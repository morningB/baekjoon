n,m = map(int,input().split(" "))

count = 0
list= []

for i in range(1,n+1):
    if n%i == 0:
        list.append(i)

list.sort()


if  len(list) < m:
    print(0)
else:
    print(list[m-1])
