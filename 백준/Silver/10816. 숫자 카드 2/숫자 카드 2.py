import sys
from collections import Counter

input = sys.stdin.readline

n = int(input())
num =list(map(int,input().split()))


sang = int(input())
sNum = list(map(int,input().split()))

a = Counter(num)

for i in sNum:
    if i in a:
        print(a[i],end=" ")
    else:
        print(0,end=" ")

# a =[0]*sang
# for i in range(len(sNum)):
#     for j in range(len(num)):
#         if sNum[i] == num[j]:
#             a[i]+=1

# print(a)