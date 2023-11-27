import sys
n = int(sys.stdin.readline())


stri = []
for i in range(n):
    m,k = map(int,sys.stdin.readline().split())
    stri.append([m,k])


stri.sort()




for i in stri:
    print(str(i[0])+" "+str(i[1]))