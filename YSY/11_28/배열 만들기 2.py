def solution(l, r):
    answer = []
    for i in range(l,r+1):
        if set(list(str(i))) == {'5', '0'} or set(list(str(i))) == {'0', '5'} or set(list(str(i))) == {'5'}: 
            answer.append(i)
    if answer:
        answer.sort()
    else:
        answer.append(-1)
    return answer