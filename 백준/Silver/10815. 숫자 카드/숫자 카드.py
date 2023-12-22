n = int(input())

s = list(map(int,input().split()))

m = int(input())

card = list(map(int,input().split()))

d = {}

for i in card:
    d[i]= 0 

for i in s:
    if i in d:
        d[i] = 1


for i in d:
    print(d[i],end=" ")
         