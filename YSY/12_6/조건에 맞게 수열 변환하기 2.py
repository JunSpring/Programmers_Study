def solution(arr):
    answer = 0
    a=True
    while a:
        ARR=arr[:]
        for i in range(0,len(arr)):
            if arr[i]>=50 and arr[i]%2==0:
                arr[i]=arr[i]/2
            elif arr[i]<50 and arr[i]%2==1:
                arr[i]=arr[i]*2+1
        answer+=1
        if ARR==arr:
            answer-=1
            a=False
    return answer