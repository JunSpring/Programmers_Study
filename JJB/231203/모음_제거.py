def solution(my_string):
    answer = my_string
    
    mothers = ['a', 'e', 'i', 'o', 'u']
    for mom in mothers:
        answer = answer.replace(mom, '')
    
    return answer