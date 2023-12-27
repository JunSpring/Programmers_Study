def solution(myString):
    answer = []
    l=0
    for i in range(0,len(myString)):
        if myString[i]!="x":
            l+=1
        else:
            answer.append(l)
            l=0
    L=0
    for i in range(len(myString)-1,-1,-1):
        if myString[i]!="x":
            L+=1
        else:
            answer.append(L)
            break
    return answer