def solution(keyinputs, board):
    answer = []
    
    xy = [0, 0]
    x_limit = board[0] // 2
    y_limit = board[1] // 2
    
    for ki in keyinputs:
        prev = xy[:]
        
        if ki == "up":
            prev[1] += 1
        elif ki == "down":
            prev[1] -= 1
        elif ki == "left":
            prev[0] -= 1
        elif ki == "right":
            prev[0] += 1
            
        if abs(prev[0]) <= x_limit and abs(prev[1]) <= y_limit:
            xy = prev[:]
            
    answer = xy
    
    return answer