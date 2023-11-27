def solution(a, b):
    answer = 0
    axorb=int((f"{a}{b}"))
    ab2=2*a*b
    if (axorb>=ab2):
        answer=axorb
    else:
        answer=ab2
    return answer