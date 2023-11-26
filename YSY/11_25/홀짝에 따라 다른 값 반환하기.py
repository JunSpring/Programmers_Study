def solution(n):
    answer = 0
    if n%2==0:
        for i in range (0,n):
            if i*2<=n:
                answer+=i*4*i
    else:
        for i in range (0,n):
            if i*2+1<=n:
                answer+=i*2+1
                
    return answer