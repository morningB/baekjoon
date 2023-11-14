n,m = map(int,input().split(' '))

monthList = [31,28,31,30,31,30,31,31,30,31,30,31]
dayList = ["SUN","MON","TUE","WED","THU","FRI","SAT"]
dd = 0

for i in range(n-1):
    dd +=monthList[i]

dd = (dd + m) % 7 

print(dayList[dd])