n = int(input())

top = list(map(int,input().split()))

st = []
re = [0 for i in range(n)]
for i in range(n):
    tt = top[i]
    while st:
        if tt < st[-1][0]:
            re[i] = st[-1][1] +1
            break
        elif st and top[i]>st[-1][0]:
            st.pop()

    st.append((top[i],i))




for i in range(n):
    print(re[i],end = ' ')