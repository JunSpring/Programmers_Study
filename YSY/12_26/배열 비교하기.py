def solution(arr1, arr2):
    answer = 0
    sum1=0
    sum2=0
    if len(arr1)!=len(arr2):
        if len(arr1)>len(arr2):
            answer=1
        else:
            answer=-1
    else:
        for i in arr1:
            sum1+=i
        for i in arr2:
            sum2+=i
        if sum1>sum2:
            answer=1
        elif sum2>sum1:
            answer=-1
        else:
            answer=0
    return answer