count = 0 
def hn(n,a,b,c):
    global count
    if n == 0:
        
        return
    if n>0:
        count = count + 1
        hn(n-1,a,c,b)
        print(a,c)

        hn(n-1,b,a,c )


x = int(input())
print(2**x - 1)
hn(x,1,2,3)    