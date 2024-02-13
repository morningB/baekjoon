n = input()
re = 0
re1 = 0

a = len(n)//2
allA = len(n)

for i in range(a):
    re += int(n[i])

for i in range(a,len(n)):
    re1 +=int(n[i])

if re == re1:
    print("LUCKY")
else:
    print("READY")