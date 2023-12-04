def solution(sides):
    answer = 0
    rest_sides = sides
    
    max_side = max(sides)
    rest_sides.remove(max_side)
    
    answer = 2 - (max_side < sum(rest_sides))
    
    return answer