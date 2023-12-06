def solution(n):
    answer = []
    while (1):
        if n==1:
            answer.append(n)
            break
        elif n%2==0:
            answer.append(n)
            n=n/2
        elif n%2==1:
            answer.append(n)
            n=3*n+1
    return answer