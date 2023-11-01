def search(n):
     if n<2:
          return False
     
     for i in range(2,n):
          if n%i==0:
               return False
          
     return True

n = int(input())
m = list(map(int,input().split(' ')))
count = 0



for j in m:
    
        
            if search(j):
                count+=1
                

print(count)

