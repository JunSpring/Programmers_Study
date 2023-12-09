def solution(num, k):
    answer = 0
    
    num = str(num)
    answer = num.find(str(k))
    if(answer != -1):
        answer += 1
    
    return answer