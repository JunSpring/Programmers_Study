import math

def solution(box, n):
    answer = 1
    
    for i in list(map(lambda x: x//n, box)):
        answer *= i
    
    return answer