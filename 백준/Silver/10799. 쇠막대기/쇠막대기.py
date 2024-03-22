n = input()

lazer = 0
count = 0
st = []
for i in range(len(n)):
    if n[i] == '(':
        st.append(n[i])

    else:
        st.pop()
        if n[i-1] == '(':
            count += len(st)
        else:
            count +=1

print(count)