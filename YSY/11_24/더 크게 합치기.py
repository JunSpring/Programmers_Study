def solution(a, b):
    answer = 0
    axorb=(f"{a}{b}")
    bxora=(f"{b}{a}")
    if (axorb>=bxora):
        answer=int(axorb)
    else:
        answer=int(bxora)
    return answer