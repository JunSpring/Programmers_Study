def fact(n, depth):
    if(n<1):
        return depth-2
    return fact(n/depth, depth+1)

def solution(n):
    answer = 0
    
    answer = fact(n, 1)
    
    return answer