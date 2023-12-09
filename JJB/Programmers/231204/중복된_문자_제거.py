def solution(my_string):
    answer = ''
    duple = ''
    
    for s in my_string:
        if not s in duple:
            answer += s
            duple += s
    
    return answer