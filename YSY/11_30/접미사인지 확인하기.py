def solution(my_string, is_suffix):
    answer = 0
    suffix=[]
    for i in range(0,len(my_string)):
        suffix.append(my_string[i:])
    for i in suffix:
        if i==is_suffix:
            answer=1
    return answer