n= int(input())
m= int(input())
k= int(input())

sum =list(str( n * m * k))


for i in range(10):
    print(sum.count(str(i)))


