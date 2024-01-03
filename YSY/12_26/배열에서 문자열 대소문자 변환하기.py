def solution(strArr):
    answer = []
    for i in range(0,len(strArr)):
        if i%2==0:
            answer.append(strArr[i].lower())
        elif i%2==1:
            answer.append(strArr[i].upper())
    return answer