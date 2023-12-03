def solution(balls, share):
    answer = 1
    
    for i in range(min([share, balls-share])):
        answer *= (balls-i)
        answer /= (i+1)
        
    return answer