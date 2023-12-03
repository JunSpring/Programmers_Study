def gcd(a, b):
    while(b):
        a, b = b, a%b
    return a

def lcm(a, b):
    return a * b / gcd(a, b)

def solution(n):
    answer = 0
    
    answer = lcm(n, 6) / 6
    
    return answer