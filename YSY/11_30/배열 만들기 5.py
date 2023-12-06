def solution(intStrs, k, s, l):
    answer = []
    I=[]
    for i in intStrs:
        I=list(i)
        a=int(''.join(I[s:s+l]))
        if a>k:
            answer.append(a)
    return answer