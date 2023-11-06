n = int(input())

list = list(map(int,input().split(' ')))
sumlist = [0 for i in range(n)]

list.sort()

for i in range(n):
    for j in range(i+1):
          sumlist[i] += list[j]


print(sum(sumlist))
