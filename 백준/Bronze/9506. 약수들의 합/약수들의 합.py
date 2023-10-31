
while True:
    
    n = int(input())
    
    if n == -1: 
        break
    sum=0
    list= []
    for i in range(1,n): 
        if n%i == 0:
            list.append(i)
            
    for i in list:
        sum+=i

    if sum == n:
        print(f"{n} =", " + ".join(map(str, list)))
    else:
        print(str(n)+" is NOT perfect.")    


