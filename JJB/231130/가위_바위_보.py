def solution(rsp):
    answer = ''
    
    winning_case = {'2':'0', '0':'5', '5':'2'}
    answer = [winning_case[case] for case in rsp]
    answer = ''.join(answer)
    
    return answer