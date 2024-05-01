import sys
sys.setrecursionlimit(10000)

n,m,k = map(int,input().split())
# 분할정복을 이용한 재귀
# def xxx(x,y,z):
#     if y==1:
#         return x%z
#     a = xxx(x,y//2,z)
#     if y%2 == 0:
#         return ((a*a)%z) * x%z
#     else:
#         return (a*a) % z

# 내장함수를 통해 함
print(pow(n,m,k))