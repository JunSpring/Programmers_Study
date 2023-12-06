def solution(my_string, indices):
    answer = list(my_string)
    indices.sort()
    n=0
    for i in indices:
        del answer[i-n]
        n+=1
    answer=''.join(answer)
    return answer