def solution(sizes):
    answer = 0
    
    rows = [max(row, col) for row, col in sizes]
    cols = [min(row, col) for row, col in sizes]
    
    answer = max(rows) * max(cols)
    
    return answer