def solution(num_list):
    answer = 0
    m=num_list[0]
    s=num_list[0]
    for i in num_list[1:]:
        m=m*i
        s+=i
    if m<s**2:
        answer=1
    return answer