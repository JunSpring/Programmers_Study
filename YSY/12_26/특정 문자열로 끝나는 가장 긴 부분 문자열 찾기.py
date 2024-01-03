def solution(myString, pat):
    answer = ''
    for i in range(len(myString)-1,len(pat)-2,-1):
        if myString[i-len(pat)+1:i+1]==pat:
            answer+=myString[0:i+1]
            break
    return answer