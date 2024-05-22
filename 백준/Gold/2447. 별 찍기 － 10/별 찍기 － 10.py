n = int(input())

def stst(n):
    if n == 3:
        return ["***","* *","***"]
    arr = stst(n//3)
    st = []

    for i in arr:
        st.append(i*3)
    for i in arr:
        st.append(i+' '*(n//3)+i)
    for i in arr:
        st.append(i*3)
    return st
def st(n):
    if n == 1:
        return ['*']
    arr = st(n//3)
    sta = []
    for i in arr:
        sta.append(i*3)
    for i in arr:
        sta.append(i+" "*(n//3)+i)
    for i in arr:
        sta.append(i*3)

    return sta



print('\n'.join(st(n)))