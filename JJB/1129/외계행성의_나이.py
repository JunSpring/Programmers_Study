def solution(age):
    answer = ''
    
    # age = [int(x) for x in str(age)]
    # age = map(lambda c : chr(c+ord('a')), age)
    # answer = ''.join(age)
    
    while age != 0:
        answer = chr(age%10 + ord('a')) + answer
        age //= 10
    
    return answer