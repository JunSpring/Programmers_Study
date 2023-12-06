def solution(arr, query):
    answer = arr
    for i in range(0,len(query)):
        print(i)
        if i%2==0:
            answer=answer[0:query[i]+1]
        elif i%2==1:
            answer=answer[query[i]:]
    return answer