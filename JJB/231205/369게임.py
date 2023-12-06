def solution(order):
    answer = 0
    
    while(order):
        answer += order%10 in [3,6,9]
        order //= 10
    
    return answer