def solution(num_list):
    answer = []
    
    even_num = 0
    odd_num = 0
    
    for num in num_list:
        if num%2==0:
            even_num += 1
        else:
            odd_num += 1
            
    answer.append(even_num)
    answer.append(odd_num)
    
    return answer