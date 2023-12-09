def solution(dot):
    answer = 0
    
    x = dot[0]
    y = dot[1]
    
    if y > 0:
        if x > 0:
            answer = 1
        else:
            answer = 2
    else:
        if x < 0:
            answer = 3
        else:
            answer = 4
    
    return answer