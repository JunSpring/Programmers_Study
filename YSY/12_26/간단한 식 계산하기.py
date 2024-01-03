def solution(binomial):
    answer = 0
    B=binomial.split()
    a=int(B[0])
    b=int(B[2])
    if B[1]=="+":
        answer=a+b
    elif B[1]=="-":
        answer=a-b
    elif B[1]=="*":
        answer=a*b
    return answer