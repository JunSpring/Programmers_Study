from math import sqrt, isqrt

def solution(n):
    answer = 0
    
    is_correct = sqrt(n) == isqrt(n)
    answer = 2 - is_correct
    
    return answer