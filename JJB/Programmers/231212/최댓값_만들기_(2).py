def solution(numbers):
    answer = 0
    
    numbers.sort()
    
    pm = numbers[-2] * numbers[-1]
    nm = numbers[0] * numbers[1]
    
    answer = max(pm, nm)
    
    return answer