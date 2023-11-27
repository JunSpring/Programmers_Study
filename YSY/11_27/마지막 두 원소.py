def solution(num_list):
    answer = num_list
    l=num_list[-1]
    l_2=num_list[-2]
    if l>l_2:
        answer.append(l-l_2)
    else:
        answer.append(l*2)
    return answer