def solution(strArr):
    answer = []
    for i in strArr:
        AD=0
        for j in range(0,len(i)-1):
            if i[j:j+2]=="ad":
                AD=1
                break
        if AD==0:
            answer.append(i)
    return answer