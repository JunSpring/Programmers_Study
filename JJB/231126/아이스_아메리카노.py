def solution(money):
    answer = []
    
    max_coffee = money // 5500
    left_money = money % 5500
    
    answer.append(max_coffee)
    answer.append(left_money)
    
    return answer