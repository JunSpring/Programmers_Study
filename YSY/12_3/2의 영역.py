def solution(arr):
    answer = []
    s=-1
    e=-1
    for i in range(0,len(arr)):
        if arr[i]==2:
            s=i
            break
    for i in range(len(arr)-1,0,-1):
        if arr[i]==2:
            e=i
            break
    if s==-1 or e==-1:
        answer.append(-1)
    else:
        answer=arr[s:e+1]
    return answer