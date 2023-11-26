def solution(nums):
    answer = 0
    
    unique_nums = set(nums)
    
    max_kinds = len(nums) // 2
    answer = min(len(unique_nums), max_kinds)
    
    return answer
