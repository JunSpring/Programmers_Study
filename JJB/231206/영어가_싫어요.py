def solution(numbers):
    answer = 0
    
    num_strings = ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"]
    for i, num_string in enumerate(num_strings):
        numbers = numbers.replace(num_string, str(i))
    answer = int(numbers)
    
    return answer