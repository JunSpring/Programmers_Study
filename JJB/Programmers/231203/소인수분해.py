import math

def solution(n):
    answer = []
    
    for divider in range(2, n+1):
        if n==1:
            break
            
        if n%divider != 0:
            continue
        
        while n%divider == 0:
            n //= divider
        answer.append(divider)
    
    return answer