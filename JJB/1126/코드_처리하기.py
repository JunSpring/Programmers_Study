def solution(codes):
    answer = []
    mode = False
    
    for idx, code in enumerate(codes):
        if code == "1":
            mode = not mode
        elif not mode and idx%2==0:
            answer.append(code)
        elif mode and idx%2==1:
            answer.append(code)
            
    if answer:
        answer = ''.join(answer)
    else:
        answer = "EMPTY"
    
    return answer