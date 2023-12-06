import math

def solution(n):
    answer = []
    left = []
    right = []
    
    for i in range(1, math.isqrt(n)+1):
        if n%i == 0:
            left.append(i)
            if i != math.sqrt(n):
                right.insert(0, n/i)
                
    answer = left + right
        
    return answer