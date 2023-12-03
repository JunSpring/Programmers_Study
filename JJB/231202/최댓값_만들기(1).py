def solution(numbers):
    answer = 0
    
    first_max = max(numbers[0], numbers[1])
    second_max = min(numbers[0], numbers[1])
    
    for number in numbers[2:]:
        second_max = max(second_max, number)
        temp = max(first_max, second_max)
        second_max = min(first_max, second_max)
        first_max = temp
        
    answer = first_max * second_max
    
    return answer