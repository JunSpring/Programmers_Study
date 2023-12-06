def solution(my_string, is_prefix):
    answer = 0
    prefix=[]
    for i in range(1,len(my_string)):
        prefix.append(my_string[0:i])
    for i in prefix:
        if i==is_prefix:
            answer=1
    return answer