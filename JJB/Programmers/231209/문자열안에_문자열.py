def solution(str1, str2):
    answer = 0
    
    is_find = str1.find(str2)  != -1
    answer = 2 - is_find
    
    return answer