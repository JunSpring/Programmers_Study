def solution(array):
    answer = []
    
    max_element = max(array)
    answer.append(max_element)
    answer.append(array.index(max_element))
    
    return answer