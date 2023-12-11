import sys
import math
input = sys.stdin.readline

n,m = map(int,input().split())
print(math.gcd(n,m))
print(math.lcm(n,m))
# a = []
# b=[]
# d =0
# if n>m:
#     d=n
# else:
#     d=m
# for i in range(1,m):
#     if n%i==0:
#         a.append(i)
#     if m%i == 0:
#         b.append(i)


# c= set(a).intersection(set(b))
# e = max(c)

# print(e)
# print(n*m//int(e))