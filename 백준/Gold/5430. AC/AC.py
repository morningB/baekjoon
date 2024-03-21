from collections import deque

T = int(input())


for i in range(T):
    p = input() # 함수
    n = int(input()) # 배열 수
    x = input() # 배열 입력
    q = deque([])
    flag = 0
    rr = 0
    num_str = ''

    for j in range(len(x)):
        if x[j].isdigit():
            num_str += x[j]
        elif num_str:  # 숫자가 저장된 경우에만 큐에 추가
            q.append(int(num_str))
            num_str = ''

    for j in range(len(p)):
        if p[j] =='R':
            rr +=1
            
        else:
            if not q:
                print('error')
                flag = 1
                break
            else:
                if rr% 2 == 1:
                    q.pop()
                else:
                    q.popleft()

    if rr % 2 !=0:
        q.reverse()
    if flag == 0:
        print("[" + ",".join(map(str,q)) + "]")
