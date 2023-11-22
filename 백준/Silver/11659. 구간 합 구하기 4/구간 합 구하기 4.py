import sys
input = sys.stdin.readline
n,m = map(int,input().split())
num = list(map(int,input().split(' ')))
si = [0]
temp = 0
for i in num:
    temp = temp +i
    si.append(temp)


for i in range(m):
    k,l = map(int,input().split(' '))
    print(si[l] - si[k-1])