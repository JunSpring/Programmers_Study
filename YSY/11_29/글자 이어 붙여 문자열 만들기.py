def solution(my_string, index_list):
    answer = ''
    r=[]
    for i in index_list:
        r.append(my_string[i])
    answer=''.join(i for i in r)
    return answer