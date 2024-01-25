def solution(s):
    m = list(map(int,s.split(' ')))
    m.sort()
    answer = str(m[0]) + " "+str(m[-1])
    return answer