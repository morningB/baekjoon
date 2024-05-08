def zzz(n,r,c):
    # base condition
    if n == 0:
        return 0
    # 구역을 4구역으로 나눈다.
    half = 1 << (n-1)
    # 왼쪽 위 구역
    if r< half and c < half:
        return zzz(n-1,r,c)
    # 오른쪽 위 구역
    if r< half and c >= half:
        return half * half +zzz(n-1,r,c-half)
    # 왼쪽 아래 구역
    if r >= half and c < half:
        return 2*half* half + zzz(n-1,r-half,c)
    # 오른쪽 아래 구역
    if r>= half and c >= half:
        return 3*half*half +zzz(n-1,r-half,c-half)
    


n,r,c = map(int,input().split())

print(zzz(n,r,c))
