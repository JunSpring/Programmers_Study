def solution(my_string, alp):
    answer = ''
    for i in my_string:
        if i==alp:
            answer+=alp.upper()
        else:
            answer+=i
    return answer