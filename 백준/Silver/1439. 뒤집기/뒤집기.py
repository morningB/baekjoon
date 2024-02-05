n = input()

c1 = 0
c0 = 0
c2 = 0

if n[0] == '1':
    c1 += 1
else:
    c0 += 1

for i in range(len(n)-1):
    if n[i] != n[i+1]:
      if n[i+1] == '1':
          c1 += 1
      else:
          c0 +=1

print(min(c1,c0))
