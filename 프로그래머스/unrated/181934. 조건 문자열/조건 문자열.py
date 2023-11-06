def solution(ineq, eq, n, m):
    answer = 0
    if ineq == '<' and eq =="=":
        return int(n<=m)
    elif ineq == '>' and eq =="=":
        return int(n>=m)
    elif  ineq == '<'and eq =="!":
        return int(n<m)

    elif ineq == '>' and eq =="!":
        return int(n>m)


