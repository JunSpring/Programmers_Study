def solution(price):
    answer = 0
    discount = 0
    
    if price >= 500000:
        discount = 0.20
    elif price >= 300000:
        discount = 0.10
    elif price >= 100000:
        discount = 0.05
        
    answer = int(price * (1-discount))
    
    return answer