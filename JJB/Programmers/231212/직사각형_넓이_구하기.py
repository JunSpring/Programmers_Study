def solution(dots):
    answer = 0
    
    max_x = max([p[0] for p in dots])
    min_x = min([p[0] for p in dots])
    max_y = max([p[1] for p in dots])
    min_y = min([p[1] for p in dots])

    answer = (max_x - min_x) * (max_y - min_y)
    
    return answer