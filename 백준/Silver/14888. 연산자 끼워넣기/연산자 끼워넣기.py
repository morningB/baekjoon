n = int(input())

num = list(map(int,input().split()))

op = list(map(int,input().split()))

maxNum = int(-1e9)
minNum = int(1e9)

def bfs(add,sub,mul,div,sum,idx):
    global maxNum,minNum
    if idx == n:
        maxNum = max(maxNum,sum)
        minNum = min(minNum,sum)
        return
    if add:
        bfs(add-1,sub,mul,div,sum +num[idx],idx+1) 
    if sub:
        bfs(add,sub-1,mul,div,sum - num[idx],idx+1)
    if mul:
        bfs(add,sub,mul-1,div,sum * num[idx],idx+1)
    if div:
        bfs(add,sub,mul,div-1,int(sum/num[idx]),idx+1)
    
bfs(op[0],op[1],op[2],op[3],num[0],1)
print(maxNum)
print(minNum)




