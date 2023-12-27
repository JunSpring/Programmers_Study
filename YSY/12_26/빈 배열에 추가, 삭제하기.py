def solution(arr, flag):
    answer = []
    for i in range(0,len(flag)):
        if flag[i]:
            for j in range(0,arr[i]):
                answer.append(arr[i])
                answer.append(arr[i])
        else:
            answer=answer[0:-1-arr[i]+1]
    return answer