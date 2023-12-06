def solution(my_string, n):
    answer = ''
    a=len(my_string)-n
    answer=my_string[a:]
    print(answer)
    return answer