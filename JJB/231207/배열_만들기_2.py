def solution(l, r):
    answer = []
    
    for num in range(l, r+1):
        num_list = list(str(num))
        if(sorted(list(set(num_list))) in [['5'],['0','5']]):
            answer.append(num)
            
    if not answer:
        answer.append(-1)
    
    return answer