def solution(a, d, included):
    answer = 0
    j=0
    for i in included:
        if i==1:
            answer+=a+d*j
        j+=1
    return answer