
n = int(input())
num1 = 0
num2 = 1
sum = 0 
for _ in range(n):
    sum = num1 +num2
    num1 = num2
    num2 = sum


print(num1)

