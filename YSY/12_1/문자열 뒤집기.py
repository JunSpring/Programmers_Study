def solution(my_string, s, e):
    answer = ''
    r_ms=my_string[s:e+1]
    answer=my_string[0:s]+r_ms[::-1]+my_string[e+1:]
    print(answer)
    return answer