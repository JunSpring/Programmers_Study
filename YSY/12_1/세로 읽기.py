def solution(my_string, m, c):
    answer = ''
    l=int(len(my_string)/m)
    for i in range(0,l):
        answer+=my_string[i*m+c-1]
    return answer