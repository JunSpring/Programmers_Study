def solution(num_list):
    answer = 0
    odd=[]
    even=[]
    for i in num_list:
        if i%2==0:
            even.append(i)
        else:
            odd.append(i)
    
    odd = list(map(str, odd))
    even = list(map(str, even))
    
    odd = int(''.join(odd))
    even = int(''.join(even))
    answer = odd + even
    
    return answer