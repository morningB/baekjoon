n = int(input())

for j in range(n):
    string = list(input())
    le = []
    ri = []
    for i in string:
        if i == '<':
            if le:
                ri.append(le.pop())
        elif i == '>':
            if ri:
                le.append(ri.pop())
        elif i == '-':
            if le:
                le.pop()
        else:
            le.append(i)
    le.extend(reversed(ri))
    print(''.join(le))