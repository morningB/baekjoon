n = int(input())

top = []

for i in range(n):
    top.append(int(input()))

re  =0
st = []
for i in range(n):
    while st:
        if st[-1]<=top[i]:
            st.pop()
        else:
            re += len(st) 
            break
    st.append(top[i])

print(re)
       