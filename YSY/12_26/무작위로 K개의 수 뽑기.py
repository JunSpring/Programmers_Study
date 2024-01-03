def solution(arr, k):
    answer = []
    for i in arr:
        if not(i in answer):
            answer.append(i)
            
            if len(answer)==k:
                break
    while len(answer)<k:
        answer.append(-1)    
    return answer