n = int(input())


for i in range(n):
    count = 0
    a = list(map(int,input().split()))    
    re = sum(a[1:]) / a[0] 
    for j in range(1,len(a)):
        if re < a[j]:
            count +=1
    result = (count / a[0]) *100
    print('%.3f' %result +"%")