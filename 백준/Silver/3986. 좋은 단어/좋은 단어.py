n = int(input())

count =0

for i in range(n):
    m = list(input())
    st = []
    for i in range(len(m)):
        if st and m[i] == st[-1]:
            st.pop()
        else:
            st.append(m[i])
            
    if not st:
        count +=1

print(count)
    
    