def solution(my_str, n):
    answer = []
    
    length = len(my_str)
    index = 0
    
    while index < length:
        answer.append(my_str[index:index+n])
        index += n
    
    return answer
