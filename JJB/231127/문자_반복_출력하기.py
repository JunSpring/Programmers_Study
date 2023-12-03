def solution(my_string, n):
    answer = ''
    
    for text in my_string:
        answer += text*n
    
    return answer