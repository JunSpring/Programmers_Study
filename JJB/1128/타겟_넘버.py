# def dfs(numbers, target, current, depth):
#     if depth == len(numbers):
#         if current == target:
#             return 1
#         return 0
    
#     return dfs(numbers, target, current+numbers[depth], depth+1) + dfs(numbers, target, current-numbers[depth], depth+1)

# def solution(numbers, target):
#     answer = 0
    
#     answer = dfs(numbers, target, 0, 0)
    
#     return answer

def solution(numbers, target):
    answer = 0
    
    def dfs(current, depth):
        nonlocal answer
        
        if depth == len(numbers):
            if current == target:
                answer += 1
            return
        
        dfs(current+numbers[depth], depth+1)
        dfs(current-numbers[depth], depth+1)
        
    dfs(0, 0)
    
    return answer