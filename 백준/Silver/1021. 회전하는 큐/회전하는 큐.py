from collections import deque

n,m = map(int,input().split())


arr = deque([i for i in range(1,n+1)])
take = list(map(int,input().split()))
count = 0

for i in take:
    while True:
        if arr[0] == i:
            arr.popleft()
            break
        else:
            if arr.index(i) <= len(arr)//2:
                arr.rotate(-1)
                count+=1
            else:
                arr.rotate(1)
                count +=1 

print(count)