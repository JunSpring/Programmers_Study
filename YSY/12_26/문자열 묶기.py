def solution(strArr):
    answer = 0
    l=[0 for i in range(0,30)]
    print(len(l))
    for i in strArr:
        l[len(i)-1]+=1
    for i in range(0,len(l)):
        if l[i]>answer:
            answer=l[i]
    for i in range(0,len(l),-1):
        if l[i]==answer:
            answer=i+1
            break
    return answer