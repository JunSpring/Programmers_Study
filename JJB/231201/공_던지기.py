import math

def solution(numbers, k):
    answer = 0
    
    answer = numbers[(k-1)*2%numbers[-1]]
    
    return answer