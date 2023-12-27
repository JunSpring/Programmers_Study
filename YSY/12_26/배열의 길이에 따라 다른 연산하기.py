def solution(arr, n):
    answer = arr
    if len(answer)%2==1:
        for i in range(0,len(answer)):
            if i%2==0:
                answer[i]+=n
    else:
        for i in range(0,len(answer)):
            if i%2==1:
                answer[i]+=n
    return answer