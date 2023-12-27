import sys
input = sys.stdin.readline
n = int(input())

st = list(input())
a = 0
for _ in range(n-1):
    c = st[:]
    word = input()
    count  = 0
    for i in word:
        if i in c:
            c.remove(i)
        else:
            count +=1

    if count <2 and len(c)<2:
        a +=1

print(a)