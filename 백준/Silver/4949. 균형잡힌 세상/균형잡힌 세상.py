

while True:
    n = input()
    st = []
    if n == '.':
        break
    for i in range(len(n)):
        if n[i] == '(' or n[i] == '[':
            st.append(n[i])
        elif n[i] == ']':
            if len(st) != 0 and st[-1] == '[':
                st.pop()
                
            else:
                st.append(']')
                break
        elif n[i] == ')':
            if len(st) != 0 and st[-1] == '(':
                st.pop()
            else:
                st.append(')')
                break

    if len(st) == 0:
        print('yes')
    else:
        print('no')
