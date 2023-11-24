

n = int(input())

stri = [input() for _ in range(n)]

stri = sorted(set(stri))
stri.sort()
stri.sort(key=lambda x:len(x))


for i in stri:
    print(i)