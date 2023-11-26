def solution(code):
    answer = ''
    ret=[]
    mode=False
    for idx, letter in enumerate(code):
        if not mode:
            if (letter!="1") and (idx%2==0):
                ret.append(letter)
            elif letter=="1":
                mode=True
        else:
            if (letter!="1") and (idx%2==1):
                ret.append(letter)
            elif letter=="1":
                mode=False
    answer=''.join(ret)
    
    if not answer:
        answer="EMPTY"
    return answer