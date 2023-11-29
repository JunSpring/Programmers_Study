def solution(numLog):
    answer = ''
    for i in range(0,len(numLog)-1):
        f=numLog[i]
        s=numLog[i+1]
        if f-s==-1:
            answer+="w"
        elif f-s==1:
            answer+="s"
        elif f-s==-10:
            answer+="d"
        elif f-s==10:
            answer+="a"
    print(answer)
    return answer