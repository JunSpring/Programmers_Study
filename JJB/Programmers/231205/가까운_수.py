def solution(array, n):
    answer = 0
    min_dist = float('inf')
    
    for num in array:
        dist = abs(num-n)
        if min_dist > dist or (min_dist == dist and num < answer):
            min_dist = dist
            answer = num
    
    return answer