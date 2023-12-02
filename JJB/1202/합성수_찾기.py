def is_composite(n):
    number = 0
    for i in range(1, n+1):
        if n%i==0:
            number += 1
        if number >= 3:
            return True
    return False

def solution(n):
    answer = 0
    
    for i in range(2, n+1):
        answer += is_composite(i)
    
    return answer