def solution(s):
    answer = 0
    answer_numbers = []
    
    numbers = s.split()
    
    for number in numbers:
        if number != 'Z':
            answer_numbers.append(int(number))
        else:
            answer_numbers.pop()
    
    answer = sum(answer_numbers)
    
    return answer